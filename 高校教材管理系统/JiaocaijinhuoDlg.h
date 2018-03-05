#if !defined(AFX_JIAOCAIJINHUODLG_H__A9B2870C_4CFA_4CB9_85A5_7C1E56687F4A__INCLUDED_)
#define AFX_JIAOCAIJINHUODLG_H__A9B2870C_4CFA_4CB9_85A5_7C1E56687F4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// JiaocaijinhuoDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// JiaocaijinhuoDlg dialog

class JiaocaijinhuoDlg : public CDialog
{
// Construction
public:
	JiaocaijinhuoDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(JiaocaijinhuoDlg)
	enum { IDD = IDD_JIAOCAIJINHUO };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(JiaocaijinhuoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(JiaocaijinhuoDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JIAOCAIJINHUODLG_H__A9B2870C_4CFA_4CB9_85A5_7C1E56687F4A__INCLUDED_)
