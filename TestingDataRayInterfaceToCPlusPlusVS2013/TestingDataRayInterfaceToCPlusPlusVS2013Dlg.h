
// TestingDataRayInterfaceToCPlusPlusVS2013Dlg.h : header file
//

#pragma once
#include "getdatactrl1.h"


// CTestingDataRayInterfaceToCPlusPlusVS2013Dlg dialog
class CTestingDataRayInterfaceToCPlusPlusVS2013Dlg : public CDialogEx
{
// Construction
public:
	CTestingDataRayInterfaceToCPlusPlusVS2013Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_TESTINGDATARAYINTERFACETOCPLUSPLUSVS2013_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CGetdatactrl1 MyGetDataCtrl;
};
