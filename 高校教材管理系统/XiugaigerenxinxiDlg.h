#if !defined(AFX_XIUGAIGERENXINXIDLG_H__B3ACF83B_41EF_4751_8F83_C05F58E52FC0__INCLUDED_)
#define AFX_XIUGAIGERENXINXIDLG_H__B3ACF83B_41EF_4751_8F83_C05F58E52FC0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// XiugaigerenxinxiDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// XiugaigerenxinxiDlg dialog

class XiugaigerenxinxiDlg : public CDialog
{
// Construction
public:
	XiugaigerenxinxiDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(XiugaigerenxinxiDlg)
	enum { IDD = IDD_XIUGAIGERENXINXI };
	CString	m_beizhu;
	CString	m_lianxifangshi;
	CString	m_mima;
	CString	m_querenmima;
	CString	m_xingming;
	CString	m_yonghuming;
	CString	m_zhuanye;
	CTime	m_chushengriqi;
	CString	m_xingbie;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(XiugaigerenxinxiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(XiugaigerenxinxiDlg)
	afx_msg void OnButtonXiugai();
	afx_msg void OnButtonHuoquwodexinxi();
	afx_msg void OnButtonQuxiao();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XIUGAIGERENXINXIDLG_H__B3ACF83B_41EF_4751_8F83_C05F58E52FC0__INCLUDED_)
