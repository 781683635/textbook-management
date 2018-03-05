#if !defined(AFX_YONGHUGENGGAIMIMADLG_H__89BE4F9A_5B1F_4532_BE75_59E9362CBB8C__INCLUDED_)
#define AFX_YONGHUGENGGAIMIMADLG_H__89BE4F9A_5B1F_4532_BE75_59E9362CBB8C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// YonghugenggaimimaDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// YonghugenggaimimaDlg dialog

class YonghugenggaimimaDlg : public CDialog
{
// Construction
public:
	YonghugenggaimimaDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(YonghugenggaimimaDlg)
	enum { IDD = IDD_YONGHUGENGGAIMIMA };
	CString	m_jiumima;
	CString	m_xinmima;
	CString	m_chongfumima;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(YonghugenggaimimaDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(YonghugenggaimimaDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YONGHUGENGGAIMIMADLG_H__89BE4F9A_5B1F_4532_BE75_59E9362CBB8C__INCLUDED_)
