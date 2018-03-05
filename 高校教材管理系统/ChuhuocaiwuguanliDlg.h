#if !defined(AFX_CHUHUOCAIWUGUANLIDLG_H__003ED40D_47E6_4B66_82AB_A28190993B9D__INCLUDED_)
#define AFX_CHUHUOCAIWUGUANLIDLG_H__003ED40D_47E6_4B66_82AB_A28190993B9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ChuhuocaiwuguanliDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CChuhuocaiwuguanliDlg dialog

class CChuhuocaiwuguanliDlg : public CDialog
{
// Construction
public:
	CChuhuocaiwuguanliDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CChuhuocaiwuguanliDlg)
	enum { IDD = IDD_CHUHUOCAIWUGUANLI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChuhuocaiwuguanliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CChuhuocaiwuguanliDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHUHUOCAIWUGUANLIDLG_H__003ED40D_47E6_4B66_82AB_A28190993B9D__INCLUDED_)
