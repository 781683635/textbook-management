#if !defined(AFX_NIANFENCAIWUGUANLIDLG_H__D4BAD366_A0A0_4133_8371_46271D3391DE__INCLUDED_)
#define AFX_NIANFENCAIWUGUANLIDLG_H__D4BAD366_A0A0_4133_8371_46271D3391DE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NianfencaiwuguanliDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// NianfencaiwuguanliDlg dialog

class NianfencaiwuguanliDlg : public CDialog
{
// Construction
public:
	NianfencaiwuguanliDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(NianfencaiwuguanliDlg)
	enum { IDD = IDD_NIANFENCAIWUGUANLI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(NianfencaiwuguanliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(NianfencaiwuguanliDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NIANFENCAIWUGUANLIDLG_H__D4BAD366_A0A0_4133_8371_46271D3391DE__INCLUDED_)
