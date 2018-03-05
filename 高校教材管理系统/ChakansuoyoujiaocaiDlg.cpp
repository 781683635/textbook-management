// ChakansuoyoujiaocaiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "ChakansuoyoujiaocaiDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChakansuoyoujiaocaiDlg dialog


CChakansuoyoujiaocaiDlg::CChakansuoyoujiaocaiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CChakansuoyoujiaocaiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CChakansuoyoujiaocaiDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CChakansuoyoujiaocaiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CChakansuoyoujiaocaiDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CChakansuoyoujiaocaiDlg, CDialog)
	//{{AFX_MSG_MAP(CChakansuoyoujiaocaiDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChakansuoyoujiaocaiDlg message handlers
