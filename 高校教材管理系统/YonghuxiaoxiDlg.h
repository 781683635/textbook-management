#if !defined(AFX_YONGHUXIAOXIDLG_H__98D9011B_E73A_4911_86D4_493FF6E1B34A__INCLUDED_)
#define AFX_YONGHUXIAOXIDLG_H__98D9011B_E73A_4911_86D4_493FF6E1B34A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// YonghuxiaoxiDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// YonghuxiaoxiDlg dialog

class YonghuxiaoxiDlg : public CDialog
{
// Construction
public:
	YonghuxiaoxiDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(YonghuxiaoxiDlg)
	enum { IDD = IDD_YONGHUXIAOXI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(YonghuxiaoxiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(YonghuxiaoxiDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YONGHUXIAOXIDLG_H__98D9011B_E73A_4911_86D4_493FF6E1B34A__INCLUDED_)
