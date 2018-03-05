#if !defined(AFX_KUCUNGUANLIDLG_H__95CE85FC_FFA1_4F04_81F1_03BF0A08167F__INCLUDED_)
#define AFX_KUCUNGUANLIDLG_H__95CE85FC_FFA1_4F04_81F1_03BF0A08167F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// KucunguanliDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// KucunguanliDlg dialog

class KucunguanliDlg : public CDialog
{
// Construction
public:
	KucunguanliDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(KucunguanliDlg)
	enum { IDD = IDD_KUCUNGUANLI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(KucunguanliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(KucunguanliDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KUCUNGUANLIDLG_H__95CE85FC_FFA1_4F04_81F1_03BF0A08167F__INCLUDED_)
