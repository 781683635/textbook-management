#if !defined(AFX_JINHUOCAIWUGUANLIDLG_H__8D4586E6_91C1_4AB4_BD1B_36B9861E8CFA__INCLUDED_)
#define AFX_JINHUOCAIWUGUANLIDLG_H__8D4586E6_91C1_4AB4_BD1B_36B9861E8CFA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// JinhuocaiwuguanliDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// JinhuocaiwuguanliDlg dialog

class JinhuocaiwuguanliDlg : public CDialog
{
// Construction
public:
	JinhuocaiwuguanliDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(JinhuocaiwuguanliDlg)
	enum { IDD = IDD_JINHUOCAIWUGUANLI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(JinhuocaiwuguanliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(JinhuocaiwuguanliDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JINHUOCAIWUGUANLIDLG_H__8D4586E6_91C1_4AB4_BD1B_36B9861E8CFA__INCLUDED_)
