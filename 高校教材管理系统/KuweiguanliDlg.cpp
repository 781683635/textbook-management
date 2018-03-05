// KuweiguanliDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "KuweiguanliDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// KuweiguanliDlg dialog


KuweiguanliDlg::KuweiguanliDlg(CWnd* pParent /*=NULL*/)
	: CDialog(KuweiguanliDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(KuweiguanliDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void KuweiguanliDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(KuweiguanliDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(KuweiguanliDlg, CDialog)
	//{{AFX_MSG_MAP(KuweiguanliDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// KuweiguanliDlg message handlers
