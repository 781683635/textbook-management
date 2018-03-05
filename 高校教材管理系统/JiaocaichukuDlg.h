#if !defined(AFX_JIAOCAICHUKUDLG_H__E37E886D_F768_4B43_81C7_93109757D41B__INCLUDED_)
#define AFX_JIAOCAICHUKUDLG_H__E37E886D_F768_4B43_81C7_93109757D41B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// JiaocaichukuDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// JiaocaichukuDlg dialog

class JiaocaichukuDlg : public CDialog
{
// Construction
public:
	JiaocaichukuDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(JiaocaichukuDlg)
	enum { IDD = IDD_JIAOCAICHUKU };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(JiaocaichukuDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(JiaocaichukuDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JIAOCAICHUKUDLG_H__E37E886D_F768_4B43_81C7_93109757D41B__INCLUDED_)
