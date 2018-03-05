// YonghuxiaoxiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "YonghuxiaoxiDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// YonghuxiaoxiDlg dialog


YonghuxiaoxiDlg::YonghuxiaoxiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(YonghuxiaoxiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(YonghuxiaoxiDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void YonghuxiaoxiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(YonghuxiaoxiDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(YonghuxiaoxiDlg, CDialog)
	//{{AFX_MSG_MAP(YonghuxiaoxiDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// YonghuxiaoxiDlg message handlers
