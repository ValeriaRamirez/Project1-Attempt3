
// TestingDataRayInterfaceToCPlusPlusVS2013.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CTestingDataRayInterfaceToCPlusPlusVS2013App:
// See TestingDataRayInterfaceToCPlusPlusVS2013.cpp for the implementation of this class
//

class CTestingDataRayInterfaceToCPlusPlusVS2013App : public CWinApp
{
public:
	CTestingDataRayInterfaceToCPlusPlusVS2013App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CTestingDataRayInterfaceToCPlusPlusVS2013App theApp;