#if !defined(AFX_DENGLUDLG_H__05ADDB11_CD6A_4021_A8BB_41CC6518F39B__INCLUDED_)
#define AFX_DENGLUDLG_H__05ADDB11_CD6A_4021_A8BB_41CC6518F39B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DengluDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DengluDlg dialog

class DengluDlg : public CDialog
{
// Construction
public:
	DengluDlg(CWnd* pParent = NULL);   // standard constructor
    /*_ConnectionPtr m_pConnection;      //数据库连接变量
	_RecordsetPtr  m_pRecordset;       //数据库记录集变量
	_CommandPtr    m_pCommand; */         //数据库命令变量                     //添加ADO的三个指针变量//CBrush m_brBk;//在public中定义 ,设置背景图片用
// Dialog Data
	//{{AFX_DATA(DengluDlg)
	enum { IDD = IDD_DENGLU };
	CString	m_Pwd;
	CString	m_UserName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DengluDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DengluDlg)
	afx_msg void OnButtonDenglu();
	afx_msg void OnButtonZhuce();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DENGLUDLG_H__05ADDB11_CD6A_4021_A8BB_41CC6518F39B__INCLUDED_)
