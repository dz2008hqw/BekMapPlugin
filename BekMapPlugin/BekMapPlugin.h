#pragma once

#include "CatHelp.h"

// BekMapPlugin.h : BekMapPlugin.DLL ����ͷ�ļ�

#if !defined( __AFXCTL_H__ )
#error "�ڰ������ļ�֮ǰ������afxctl.h��"
#endif

#include "resource.h"       // ������


// CBekMapPluginApp : �й�ʵ�ֵ���Ϣ������� BekMapPlugin.cpp��

class CBekMapPluginApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

