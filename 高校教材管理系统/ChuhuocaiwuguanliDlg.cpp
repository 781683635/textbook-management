// ChuhuocaiwuguanliDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "ChuhuocaiwuguanliDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChuhuocaiwuguanliDlg dialog


CChuhuocaiwuguanliDlg::CChuhuocaiwuguanliDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CChuhuocaiwuguanliDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CChuhuocaiwuguanliDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CChuhuocaiwuguanliDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CChuhuocaiwuguanliDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CChuhuocaiwuguanliDlg, CDialog)
	//{{AFX_MSG_MAP(CChuhuocaiwuguanliDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChuhuocaiwuguanliDlg message handlers
