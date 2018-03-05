// BekMapPluginCtrl.cpp : CBekMapPluginCtrl ActiveX 控件类的实现。

#include "stdafx.h"
#include "BekMapPlugin.h"
#include "BekMapPluginCtrl.h"
#include "BekMapPluginPropPage.h"
#include "afxdialogex.h"

#define MODULE_NAME	L"BekMapPluginCtrl"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CBekMapPluginCtrl, COleControl)

// 消息映射

BEGIN_MESSAGE_MAP(CBekMapPluginCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// 调度映射

BEGIN_DISPATCH_MAP(CBekMapPluginCtrl, COleControl)
END_DISPATCH_MAP()

// 事件映射

BEGIN_EVENT_MAP(CBekMapPluginCtrl, COleControl)
END_EVENT_MAP()

// 属性页

// TODO: 根据需要添加更多属性页。请记住增加计数!
BEGIN_PROPPAGEIDS(CBekMapPluginCtrl, 1)
	PROPPAGEID(CBekMapPluginPropPage::guid)
END_PROPPAGEIDS(CBekMapPluginCtrl)

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CBekMapPluginCtrl, "BEKMAPPLUGIN.BekMapPluginCtrl.1",
	0xabff8b05, 0xdda5, 0x467f, 0x86, 0x5a, 0x95, 0xf0, 0xa, 0x32, 0x68, 0x31)

// 键入库 ID 和版本

IMPLEMENT_OLETYPELIB(CBekMapPluginCtrl, _tlid, _wVerMajor, _wVerMinor)

// 接口 ID

const IID IID_DBekMapPlugin = { 0x45D6C6E4, 0x52A0, 0x4FA3, { 0x81, 0xFB, 0x55, 0xA9, 0x6F, 0xB8, 0x4, 0x1A } };
const IID IID_DBekMapPluginEvents = { 0xBD60276B, 0x7666, 0x4C3B, { 0x87, 0x6D, 0x50, 0x9E, 0x28, 0xDE, 0x8E, 0x73 } };

// 控件类型信息

static const DWORD _dwBekMapPluginOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CBekMapPluginCtrl, IDS_BEKMAPPLUGIN, _dwBekMapPluginOleMisc)

// CBekMapPluginCtrl::CBekMapPluginCtrlFactory::UpdateRegistry -
// 添加或移除 CBekMapPluginCtrl 的系统注册表项

BOOL CBekMapPluginCtrl::CBekMapPluginCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  验证您的控件是否符合单元模型线程处理规则。
	// 有关更多信息，请参考 MFC 技术说明 64。
	// 如果您的控件不符合单元模型规则，则
	// 必须修改如下代码，将第六个参数从
	// afxRegApartmentThreading 改为 0。

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_BEKMAPPLUGIN,
			IDB_BEKMAPPLUGIN,
			afxRegApartmentThreading,
			_dwBekMapPluginOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


// CBekMapPluginCtrl::CBekMapPluginCtrl - 构造函数

CBekMapPluginCtrl::CBekMapPluginCtrl()
{
	InitializeIIDs(&IID_DBekMapPlugin, &IID_DBekMapPluginEvents);
	// TODO:  在此初始化控件的实例数据。
}

// CBekMapPluginCtrl::~CBekMapPluginCtrl - 析构函数

CBekMapPluginCtrl::~CBekMapPluginCtrl()
{
	// TODO:  在此清理控件的实例数据。
}

// CBekMapPluginCtrl::OnDraw - 绘图函数

void CBekMapPluginCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO:  用您自己的绘图代码替换下面的代码。

	m_DlgPlayRealTime.MoveWindow(rcBounds, 1);
}

// CBekMapPluginCtrl::DoPropExchange - 持久性支持

void CBekMapPluginCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: 为每个持久的自定义属性调用 PX_ 函数。
}


// CBekMapPluginCtrl::OnResetState - 将控件重置为默认状态

void CBekMapPluginCtrl::OnResetState()
{
	COleControl::OnResetState();  // 重置 DoPropExchange 中找到的默认值

	// TODO:  在此重置任意其他控件状态。
}


// CBekMapPluginCtrl 消息处理程序


int CBekMapPluginCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  在此添加您专用的创建代码
	CRect rect;
	GetClientRect(&rect);

	m_DlgPlayRealTime.Create(IDD_DLG_PLAY_REALTIME, this);
	m_DlgPlayRealTime.MoveWindow(rect.left, rect.top, rect.Width(), rect.Height());
	m_DlgPlayRealTime.ShowWindow(SW_SHOW);

	return 0;
}
