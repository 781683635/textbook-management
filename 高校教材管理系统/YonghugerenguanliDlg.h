#if !defined(AFX_YONGHUGERENGUANLIDLG_H__A6F9CCF6_7197_4D19_88F1_A3B2D8EEEE02__INCLUDED_)
#define AFX_YONGHUGERENGUANLIDLG_H__A6F9CCF6_7197_4D19_88F1_A3B2D8EEEE02__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// YonghugerenguanliDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// YonghugerenguanliDlg dialog

class YonghugerenguanliDlg : public CDialog
{
// Construction
public:
	YonghugerenguanliDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(YonghugerenguanliDlg)
	enum { IDD = IDD_YONGHUGERENGUANLI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(YonghugerenguanliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(YonghugerenguanliDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YONGHUGERENGUANLIDLG_H__A6F9CCF6_7197_4D19_88F1_A3B2D8EEEE02__INCLUDED_)
