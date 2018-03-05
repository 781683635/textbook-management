#if !defined(AFX_KUWEIGUANLIDLG_H__F4C13A11_FBCB_4CF6_9A4C_4514DB07487A__INCLUDED_)
#define AFX_KUWEIGUANLIDLG_H__F4C13A11_FBCB_4CF6_9A4C_4514DB07487A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// KuweiguanliDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// KuweiguanliDlg dialog

class KuweiguanliDlg : public CDialog
{
// Construction
public:
	KuweiguanliDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(KuweiguanliDlg)
	enum { IDD = IDD_KUWEIGUANLI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(KuweiguanliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(KuweiguanliDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KUWEIGUANLIDLG_H__F4C13A11_FBCB_4CF6_9A4C_4514DB07487A__INCLUDED_)
