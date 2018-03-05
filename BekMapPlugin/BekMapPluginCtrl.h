#pragma once
#include "PlayRealTime.h"

// BekMapPluginCtrl.h : CBekMapPluginCtrl ActiveX �ؼ����������


// CBekMapPluginCtrl : �й�ʵ�ֵ���Ϣ������� BekMapPluginCtrl.cpp��

class CBekMapPluginCtrl : public COleControl
{
	DECLARE_DYNCREATE(CBekMapPluginCtrl)

// ���캯��
public:
	CBekMapPluginCtrl();

// ��д
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ʵ��
protected:
	~CBekMapPluginCtrl();

	DECLARE_OLECREATE_EX(CBekMapPluginCtrl)    // �๤���� guid
	DECLARE_OLETYPELIB(CBekMapPluginCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CBekMapPluginCtrl)     // ����ҳ ID
	DECLARE_OLECTLTYPE(CBekMapPluginCtrl)		// �������ƺ�����״̬

// ��Ϣӳ��
	DECLARE_MESSAGE_MAP()

// ����ӳ��
	DECLARE_DISPATCH_MAP()

// �¼�ӳ��
	DECLARE_EVENT_MAP()

// ���Ⱥ��¼� ID
public:
	enum {
	};
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);


public:
	CPlayRealTime m_DlgPlayRealTime;
};

