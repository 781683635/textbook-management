// JiaocaijinhuoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "JiaocaijinhuoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// JiaocaijinhuoDlg dialog


JiaocaijinhuoDlg::JiaocaijinhuoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(JiaocaijinhuoDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(JiaocaijinhuoDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void JiaocaijinhuoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(JiaocaijinhuoDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(JiaocaijinhuoDlg, CDialog)
	//{{AFX_MSG_MAP(JiaocaijinhuoDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// JiaocaijinhuoDlg message handlers
