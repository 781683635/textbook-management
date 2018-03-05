#if !defined(AFX_ZHUCEDLG_H__046879F9_4D15_466D_A180_1A161E474ACC__INCLUDED_)
#define AFX_ZHUCEDLG_H__046879F9_4D15_466D_A180_1A161E474ACC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ZhuceDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ZhuceDlg dialog

class ZhuceDlg : public CDialog
{
// Construction
public:
	ZhuceDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ZhuceDlg)
	enum { IDD = IDD_ZHUCE };
	CString	m_yonghuming;
	CString	m_mima;
	CString	m_querenmima;
	CString	m_xingming;
	CString	m_zhuanye;
	CString	m_lianxifangshi;
	CString	m_beizhu;
	CString	m_xingbie;
	CTime	m_chushengriqi;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ZhuceDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ZhuceDlg)
	afx_msg void OnButtonZhuce();
	afx_msg void OnButtonQuxiao();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZHUCEDLG_H__046879F9_4D15_466D_A180_1A161E474ACC__INCLUDED_)
