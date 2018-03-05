// BekMapPluginPropPage.cpp : CBekMapPluginPropPage 属性页类的实现。

#include "stdafx.h"
#include "BekMapPlugin.h"
#include "BekMapPluginPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CBekMapPluginPropPage, COlePropertyPage)

// 消息映射

BEGIN_MESSAGE_MAP(CBekMapPluginPropPage, COlePropertyPage)
END_MESSAGE_MAP()

// 初始化类工厂和 guid

IMPLEMENT_OLECREATE_EX(CBekMapPluginPropPage, "BEKMAPPLUGIN.BekMapPluginPropPage.1",
	0xf7649658, 0x86a7, 0x4397, 0xb0, 0xd5, 0x5e, 0xbd, 0x1d, 0x1, 0xf4, 0x70)

// CBekMapPluginPropPage::CBekMapPluginPropPageFactory::UpdateRegistry -
// 添加或移除 CBekMapPluginPropPage 的系统注册表项

BOOL CBekMapPluginPropPage::CBekMapPluginPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_BEKMAPPLUGIN_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}

// CBekMapPluginPropPage::CBekMapPluginPropPage - 构造函数

CBekMapPluginPropPage::CBekMapPluginPropPage() :
	COlePropertyPage(IDD, IDS_BEKMAPPLUGIN_PPG_CAPTION)
{
}

// CBekMapPluginPropPage::DoDataExchange - 在页和属性间移动数据

void CBekMapPluginPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}

// CBekMapPluginPropPage 消息处理程序
