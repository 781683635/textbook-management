// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__78D72F44_543F_4E72_90AF_0C907E4BFD53__INCLUDED_)
#define AFX_MAINFRM_H__78D72F44_543F_4E72_90AF_0C907E4BFD53__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMainFrame : public CFrameWnd
{
	
protected: // create from serialization only
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMainFrame();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	CStatusBar  m_wndStatusBar;

// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnMenuChakanbenxueqisuoxujiaocai();
	afx_msg void OnMenuXiugaigerenxinxi();
	afx_msg void OnMenuGenggaimima();
	afx_msg void OnMenuJiaocaituiding();
	afx_msg void OnMenuLianxiguanliyuan();
	afx_msg void OnMenuJiaocaijibenxinxi();
	afx_msg void OnMenuJiaocaijinhuo();
	afx_msg void OnMenuJiaocaichuku();
	afx_msg void OnMenuKucunguanli();
	afx_msg void OnMenuKuweiguanli();
	afx_msg void OnMenuGenjujiaocaihaoyuding();
	afx_msg void OnMenuGenjujiaocaimingyuding();
	afx_msg void OnMenuFenleixuanzeyuding();
	afx_msg void OnMenuChakansuoyoujiaocai();
	afx_msg void OnMenuJinhuocaiwuguanli();
	afx_msg void OnMenuChuhuocaiwuguanli();
	afx_msg void OnMenuYuefencaiwuguanli();
	afx_msg void OnMenuNianfencaiwuguanli();
	afx_msg void OnMenuYinglizongbiao();
	afx_msg void OnMenuYonghugerenguanli();
	afx_msg void OnMenuBanjifuzerenguanli();
	afx_msg void OnMenuGongyingshangguanli();
	afx_msg void OnMenuChubansheguanli();
	afx_msg void OnMenuZhucexinguanliyuan();
	afx_msg void OnMenuXiugaiguanliyuanmima();
	afx_msg void OnMenuXiugaiyonghujibenxinxi();
	afx_msg void OnMenuYonghuxiaoxi();
	afx_msg void OnMenuQiehuanyonghu();
	afx_msg void OnMenuTuichudenglu();
	afx_msg void OnMenuBangzhu();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__78D72F44_543F_4E72_90AF_0C907E4BFD53__INCLUDED_)
