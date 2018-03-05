// ChubansheguanliDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "ChubansheguanliDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChubansheguanliDlg dialog


CChubansheguanliDlg::CChubansheguanliDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CChubansheguanliDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CChubansheguanliDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CChubansheguanliDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CChubansheguanliDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CChubansheguanliDlg, CDialog)
	//{{AFX_MSG_MAP(CChubansheguanliDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChubansheguanliDlg message handlers
