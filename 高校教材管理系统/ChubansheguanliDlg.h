#if !defined(AFX_CHUBANSHEGUANLIDLG_H__0D9A6354_6FC3_4DF4_AE7F_AF895695EB0B__INCLUDED_)
#define AFX_CHUBANSHEGUANLIDLG_H__0D9A6354_6FC3_4DF4_AE7F_AF895695EB0B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ChubansheguanliDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CChubansheguanliDlg dialog

class CChubansheguanliDlg : public CDialog
{
// Construction
public:
	CChubansheguanliDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CChubansheguanliDlg)
	enum { IDD = IDD_CHUBANSHEGUANLI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChubansheguanliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CChubansheguanliDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHUBANSHEGUANLIDLG_H__0D9A6354_6FC3_4DF4_AE7F_AF895695EB0B__INCLUDED_)
