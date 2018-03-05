// KucunguanliDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "KucunguanliDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// KucunguanliDlg dialog


KucunguanliDlg::KucunguanliDlg(CWnd* pParent /*=NULL*/)
	: CDialog(KucunguanliDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(KucunguanliDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void KucunguanliDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(KucunguanliDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(KucunguanliDlg, CDialog)
	//{{AFX_MSG_MAP(KucunguanliDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// KucunguanliDlg message handlers
