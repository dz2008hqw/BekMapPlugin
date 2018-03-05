// BekMapPlugin.cpp : CBekMapPluginApp 和 DLL 注册的实现。

#include "stdafx.h"
#include "BekMapPlugin.h"

#include "CatHelp.h"
#include <ObjSafe.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CBekMapPluginApp theApp;

const GUID CDECL _tlid = { 0xF01C9F8D, 0xFD97, 0x4E32, { 0xA1, 0xE4, 0xF9, 0x25, 0x48, 0x1D, 0x83, 0xBF } };

const CATID CLSID_SafeItem = { 0xabff8b05, 0xdda5, 0x467f, { 0x86, 0x5a, 0x95, 0xf0, 0xa, 0x32, 0x68, 0x31} };

const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CBekMapPluginApp::InitInstance - DLL 初始化

BOOL CBekMapPluginApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO:  在此添加您自己的模块初始化代码。

		//设置中文环境
		setlocale(LC_ALL, ".936");

		//从注册表读取程序路径
		m_wstrCurrentPath = _T("");
		wstring keyPath = _T("SOFTWARE\\Bekzoyo\\BekMapPlugin");
		wstring keyStr = _T("PATH");
		DWORD dwLen = 0;
		CRegOperation::RegReadString(HKEY_LOCAL_MACHINE, keyPath.c_str(), keyStr.c_str(), NULL, &dwLen, _T(""));
		if (dwLen > 0)
		{
			TCHAR* szStr = new TCHAR[dwLen];
			if (CRegOperation::RegReadString(HKEY_LOCAL_MACHINE, keyPath.c_str(), keyStr.c_str(), szStr, &dwLen, _T("123")))
			{
				m_wstrCurrentPath = szStr;
			}
			delete[]szStr;
		}
		if (!CWinUtils::FileExists(m_wstrCurrentPath))
		{
			AfxMessageBox(_T("地图控件初始化失败!"));
			return FALSE;
		}

		//目录初始化
		wstring wstrLogPath = m_wstrCurrentPath + _T("\\log");
		if (!CWinUtils::FileExists(wstrLogPath))
		{
			CWinUtils::CreateDirectorys(wstrLogPath);
		}

		//日志模块初始化
		wstring wsLogConf = m_wstrCurrentPath + _T("\\conf\\BekMapPlugin_logconf.ini");
		wstring wsLogPath = _T("\"") + m_wstrCurrentPath + _T("\\log\\BekMapPlugin.log\"");
		WritePrivateProfileString(_T("GLOBAL"), _T("log_output_filepath"), wsLogPath.c_str(), wsLogConf.c_str());	//设置日志文件路径
		LogBase_init(wsLogConf.c_str());
	}

	return bInit;
}



// CBekMapPluginApp::ExitInstance - DLL 终止

int CBekMapPluginApp::ExitInstance()
{
	// TODO:  在此添加您自己的模块终止代码。

	LogBase_done();

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - 将项添加到系统注册表

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	//注册控件初始化安全入口
	HRESULT hr = CreateComponentCategory(CATID_SafeForInitializing,
		L"Controls safely initializable from persistent data!");
	if (FAILED(hr))
	{
		return hr;
	}
	hr = RegisterCLSIDInCategory(CLSID_SafeItem,
		CATID_SafeForInitializing);
	if (FAILED(hr))
	{
		return hr;
	}

	//注册控件脚本安全入口
	hr = CreateComponentCategory(CATID_SafeForScripting,
		L"Controls safely  scriptable!");
	if (FAILED(hr))
	{
		return hr;
	}
	hr = RegisterCLSIDInCategory(CLSID_SafeItem,
		CATID_SafeForScripting);
	if (FAILED(hr))
	{
		return hr;
	}

	return NOERROR;
}



// DllUnregisterServer - 将项从系统注册表中移除

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	//删除控件初始化安全入口
	HRESULT hr = UnRegisterCLSIDInCategory(CLSID_SafeItem, CATID_SafeForInitializing);
	if (FAILED(hr))
	{
		return hr;
	}

	//删除控件脚本安全入口
	hr = UnRegisterCLSIDInCategory(CLSID_SafeItem, CATID_SafeForScripting);
	if (FAILED(hr))
	{
		return hr;
	}

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
