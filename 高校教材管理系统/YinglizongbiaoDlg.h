#if !defined(AFX_YINGLIZONGBIAODLG_H__49C31A05_8963_40E6_8798_A29651FE3D88__INCLUDED_)
#define AFX_YINGLIZONGBIAODLG_H__49C31A05_8963_40E6_8798_A29651FE3D88__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// YinglizongbiaoDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// YinglizongbiaoDlg dialog

class YinglizongbiaoDlg : public CDialog
{
// Construction
public:
	YinglizongbiaoDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(YinglizongbiaoDlg)
	enum { IDD = IDD_YINGLIZONGBIAO };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(YinglizongbiaoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(YinglizongbiaoDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YINGLIZONGBIAODLG_H__49C31A05_8963_40E6_8798_A29651FE3D88__INCLUDED_)
