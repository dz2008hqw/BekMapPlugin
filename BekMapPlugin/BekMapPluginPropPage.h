#pragma once

// BekMapPluginPropPage.h : CBekMapPluginPropPage ����ҳ���������


// CBekMapPluginPropPage : �й�ʵ�ֵ���Ϣ������� BekMapPluginPropPage.cpp��

class CBekMapPluginPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CBekMapPluginPropPage)
	DECLARE_OLECREATE_EX(CBekMapPluginPropPage)

// ���캯��
public:
	CBekMapPluginPropPage();

// �Ի�������
	enum { IDD = IDD_PROPPAGE_BEKMAPPLUGIN };

// ʵ��
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ��Ϣӳ��
protected:
	DECLARE_MESSAGE_MAP()
};

