
// StreamMediaService.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CStreamMediaServiceApp:
// �йش����ʵ�֣������ StreamMediaService.cpp
//

class CStreamMediaServiceApp : public CWinApp
{
public:
	CStreamMediaServiceApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CStreamMediaServiceApp theApp;