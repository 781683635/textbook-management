// YonghugerenguanliDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "YonghugerenguanliDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// YonghugerenguanliDlg dialog


YonghugerenguanliDlg::YonghugerenguanliDlg(CWnd* pParent /*=NULL*/)
	: CDialog(YonghugerenguanliDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(YonghugerenguanliDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void YonghugerenguanliDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(YonghugerenguanliDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(YonghugerenguanliDlg, CDialog)
	//{{AFX_MSG_MAP(YonghugerenguanliDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// YonghugerenguanliDlg message handlers
