// JiaocaichukuDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "JiaocaichukuDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// JiaocaichukuDlg dialog


JiaocaichukuDlg::JiaocaichukuDlg(CWnd* pParent /*=NULL*/)
	: CDialog(JiaocaichukuDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(JiaocaichukuDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void JiaocaichukuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(JiaocaichukuDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(JiaocaichukuDlg, CDialog)
	//{{AFX_MSG_MAP(JiaocaichukuDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// JiaocaichukuDlg message handlers
