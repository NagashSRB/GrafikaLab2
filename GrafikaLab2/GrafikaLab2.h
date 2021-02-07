
// GrafikaLab2.h : main header file for the GrafikaLab2 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CGrafikaLab2App:
// See GrafikaLab2.cpp for the implementation of this class
//

class CGrafikaLab2App : public CWinApp
{
public:
	CGrafikaLab2App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CGrafikaLab2App theApp;
