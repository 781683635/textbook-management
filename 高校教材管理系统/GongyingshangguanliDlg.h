#if !defined(AFX_GONGYINGSHANGGUANLIDLG_H__5DF5B340_7946_4502_BF82_84546146C624__INCLUDED_)
#define AFX_GONGYINGSHANGGUANLIDLG_H__5DF5B340_7946_4502_BF82_84546146C624__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GongyingshangguanliDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// GongyingshangguanliDlg dialog

class GongyingshangguanliDlg : public CDialog
{
// Construction
public:
	GongyingshangguanliDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(GongyingshangguanliDlg)
	enum { IDD = IDD_GONGYINGSHANGGUANLI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(GongyingshangguanliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(GongyingshangguanliDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GONGYINGSHANGGUANLIDLG_H__5DF5B340_7946_4502_BF82_84546146C624__INCLUDED_)
