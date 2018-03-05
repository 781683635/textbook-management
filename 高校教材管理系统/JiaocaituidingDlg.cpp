// JiaocaituidingDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "JiaocaituidingDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// JiaocaituidingDlg dialog


JiaocaituidingDlg::JiaocaituidingDlg(CWnd* pParent /*=NULL*/)
	: CDialog(JiaocaituidingDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(JiaocaituidingDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void JiaocaituidingDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(JiaocaituidingDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(JiaocaituidingDlg, CDialog)
	//{{AFX_MSG_MAP(JiaocaituidingDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// JiaocaituidingDlg message handlers
