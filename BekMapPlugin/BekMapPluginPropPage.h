#pragma once

// BekMapPluginPropPage.h : CBekMapPluginPropPage 属性页类的声明。


// CBekMapPluginPropPage : 有关实现的信息，请参阅 BekMapPluginPropPage.cpp。

class CBekMapPluginPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CBekMapPluginPropPage)
	DECLARE_OLECREATE_EX(CBekMapPluginPropPage)

// 构造函数
public:
	CBekMapPluginPropPage();

// 对话框数据
	enum { IDD = IDD_PROPPAGE_BEKMAPPLUGIN };

// 实现
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 消息映射
protected:
	DECLARE_MESSAGE_MAP()
};

