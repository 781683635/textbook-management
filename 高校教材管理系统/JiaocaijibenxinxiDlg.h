#if !defined(AFX_JIAOCAIJIBENXINXIDLG_H__B4B164E0_2D7D_42D8_A678_2897BE684827__INCLUDED_)
#define AFX_JIAOCAIJIBENXINXIDLG_H__B4B164E0_2D7D_42D8_A678_2897BE684827__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// JiaocaijibenxinxiDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// JiaocaijibenxinxiDlg dialog

class JiaocaijibenxinxiDlg : public CDialog
{
// Construction
public:
	JiaocaijibenxinxiDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(JiaocaijibenxinxiDlg)
	enum { IDD = IDD_JIAOCAIJIBENXINXI };
	CString	m_chaxuntiaojian;
	CString	m_chaxunneirong;
	CString	m_zhidujiaocaibianhao;
	CString	m_zhidujiaocaimingcheng;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(JiaocaijibenxinxiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(JiaocaijibenxinxiDlg)
	afx_msg void OnButtonChaxun();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JIAOCAIJIBENXINXIDLG_H__B4B164E0_2D7D_42D8_A678_2897BE684827__INCLUDED_)
