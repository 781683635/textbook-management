#if !defined(AFX_LIANXIGUANLIYUANDLG_H__0BDD1998_09A7_4626_9642_D4D43475598C__INCLUDED_)
#define AFX_LIANXIGUANLIYUANDLG_H__0BDD1998_09A7_4626_9642_D4D43475598C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LianxiguanliyuanDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// LianxiguanliyuanDlg dialog

class LianxiguanliyuanDlg : public CDialog
{
// Construction
public:
	LianxiguanliyuanDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(LianxiguanliyuanDlg)
	enum { IDD = IDD_LIANXIGUANLIYUAN };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(LianxiguanliyuanDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(LianxiguanliyuanDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIANXIGUANLIYUANDLG_H__0BDD1998_09A7_4626_9642_D4D43475598C__INCLUDED_)
