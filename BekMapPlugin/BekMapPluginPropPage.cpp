// BekMapPluginPropPage.cpp : CBekMapPluginPropPage ����ҳ���ʵ�֡�

#include "stdafx.h"
#include "BekMapPlugin.h"
#include "BekMapPluginPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CBekMapPluginPropPage, COlePropertyPage)

// ��Ϣӳ��

BEGIN_MESSAGE_MAP(CBekMapPluginPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// ��ʼ���๤���� guid

IMPLEMENT_OLECREATE_EX(CBekMapPluginPropPage, "BEKMAPPLUGIN.BekMapPluginPropPage.1",
	0xf7649658, 0x86a7, 0x4397, 0xb0, 0xd5, 0x5e, 0xbd, 0x1d, 0x1, 0xf4, 0x70)

// CBekMapPluginPropPage::CBekMapPluginPropPageFactory::UpdateRegistry -
// ��ӻ��Ƴ� CBekMapPluginPropPage ��ϵͳע�����

BOOL CBekMapPluginPropPage::CBekMapPluginPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_BEKMAPPLUGIN_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CBekMapPluginPropPage::CBekMapPluginPropPage - ���캯��

CBekMapPluginPropPage::CBekMapPluginPropPage() :
	COlePropertyPage(IDD, IDS_BEKMAPPLUGIN_PPG_CAPTION)
{
}

// CBekMapPluginPropPage::DoDataExchange - ��ҳ�����Լ��ƶ�����

void CBekMapPluginPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CBekMapPluginPropPage ��Ϣ�������
