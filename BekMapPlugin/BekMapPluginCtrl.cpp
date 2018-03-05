// BekMapPluginCtrl.cpp : CBekMapPluginCtrl ActiveX �ؼ����ʵ�֡�

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

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CBekMapPluginCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	ON_WM_CREATE()
END_MESSAGE_MAP()

// ����ӳ��

BEGIN_DISPATCH_MAP(CBekMapPluginCtrl, COleControl)
END_DISPATCH_MAP()

// �¼�ӳ��

BEGIN_EVENT_MAP(CBekMapPluginCtrl, COleControl)
END_EVENT_MAP()

// ����ҳ

// TODO: ������Ҫ��Ӹ�������ҳ�����ס���Ӽ���!
BEGIN_PROPPAGEIDS(CBekMapPluginCtrl, 1)
	PROPPAGEID(CBekMapPluginPropPage::guid)
END_PROPPAGEIDS(CBekMapPluginCtrl)

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CBekMapPluginCtrl, "BEKMAPPLUGIN.BekMapPluginCtrl.1",
	0xabff8b05, 0xdda5, 0x467f, 0x86, 0x5a, 0x95, 0xf0, 0xa, 0x32, 0x68, 0x31)

// ����� ID �Ͱ汾

IMPLEMENT_OLETYPELIB(CBekMapPluginCtrl, _tlid, _wVerMajor, _wVerMinor)

// �ӿ� ID

const IID IID_DBekMapPlugin = { 0x45D6C6E4, 0x52A0, 0x4FA3, { 0x81, 0xFB, 0x55, 0xA9, 0x6F, 0xB8, 0x4, 0x1A } };
const IID IID_DBekMapPluginEvents = { 0xBD60276B, 0x7666, 0x4C3B, { 0x87, 0x6D, 0x50, 0x9E, 0x28, 0xDE, 0x8E, 0x73 } };

// �ؼ�������Ϣ

static const DWORD _dwBekMapPluginOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CBekMapPluginCtrl, IDS_BEKMAPPLUGIN, _dwBekMapPluginOleMisc)

// CBekMapPluginCtrl::CBekMapPluginCtrlFactory::UpdateRegistry -
// ��ӻ��Ƴ� CBekMapPluginCtrl ��ϵͳע�����

BOOL CBekMapPluginCtrl::CBekMapPluginCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO:  ��֤���Ŀؼ��Ƿ���ϵ�Ԫģ���̴߳������
	// �йظ�����Ϣ����ο� MFC ����˵�� 64��
	// ������Ŀؼ������ϵ�Ԫģ�͹�����
	// �����޸����´��룬��������������
	// afxRegApartmentThreading ��Ϊ 0��

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


// CBekMapPluginCtrl::CBekMapPluginCtrl - ���캯��

CBekMapPluginCtrl::CBekMapPluginCtrl()
{
	InitializeIIDs(&IID_DBekMapPlugin, &IID_DBekMapPluginEvents);
	// TODO:  �ڴ˳�ʼ���ؼ���ʵ�����ݡ�
}

// CBekMapPluginCtrl::~CBekMapPluginCtrl - ��������

CBekMapPluginCtrl::~CBekMapPluginCtrl()
{
	// TODO:  �ڴ�����ؼ���ʵ�����ݡ�
}

// CBekMapPluginCtrl::OnDraw - ��ͼ����

void CBekMapPluginCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& /* rcInvalid */)
{
	if (!pdc)
		return;

	// TODO:  �����Լ��Ļ�ͼ�����滻����Ĵ��롣

	m_DlgPlayRealTime.MoveWindow(rcBounds, 1);
}

// CBekMapPluginCtrl::DoPropExchange - �־���֧��

void CBekMapPluginCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Ϊÿ���־õ��Զ������Ե��� PX_ ������
}


// CBekMapPluginCtrl::OnResetState - ���ؼ�����ΪĬ��״̬

void CBekMapPluginCtrl::OnResetState()
{
	COleControl::OnResetState();  // ���� DoPropExchange ���ҵ���Ĭ��ֵ

	// TODO:  �ڴ��������������ؼ�״̬��
}


// CBekMapPluginCtrl ��Ϣ�������


int CBekMapPluginCtrl::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (COleControl::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  �ڴ������ר�õĴ�������
	CRect rect;
	GetClientRect(&rect);

	m_DlgPlayRealTime.Create(IDD_DLG_PLAY_REALTIME, this);
	m_DlgPlayRealTime.MoveWindow(rect.left, rect.top, rect.Width(), rect.Height());
	m_DlgPlayRealTime.ShowWindow(SW_SHOW);

	return 0;
}
