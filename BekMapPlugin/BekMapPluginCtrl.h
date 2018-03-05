#pragma once
#include "PlayRealTime.h"

// BekMapPluginCtrl.h : CBekMapPluginCtrl ActiveX 控件类的声明。


// CBekMapPluginCtrl : 有关实现的信息，请参阅 BekMapPluginCtrl.cpp。

class CBekMapPluginCtrl : public COleControl
{
	DECLARE_DYNCREATE(CBekMapPluginCtrl)

// 构造函数
public:
	CBekMapPluginCtrl();

// 重写
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// 实现
protected:
	~CBekMapPluginCtrl();

	DECLARE_OLECREATE_EX(CBekMapPluginCtrl)    // 类工厂和 guid
	DECLARE_OLETYPELIB(CBekMapPluginCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CBekMapPluginCtrl)     // 属性页 ID
	DECLARE_OLECTLTYPE(CBekMapPluginCtrl)		// 类型名称和杂项状态

// 消息映射
	DECLARE_MESSAGE_MAP()

// 调度映射
	DECLARE_DISPATCH_MAP()

// 事件映射
	DECLARE_EVENT_MAP()

// 调度和事件 ID
public:
	enum {
	};
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);


public:
	CPlayRealTime m_DlgPlayRealTime;
};

