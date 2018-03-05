// YinglizongbiaoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "YinglizongbiaoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// YinglizongbiaoDlg dialog


YinglizongbiaoDlg::YinglizongbiaoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(YinglizongbiaoDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(YinglizongbiaoDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void YinglizongbiaoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(YinglizongbiaoDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(YinglizongbiaoDlg, CDialog)
	//{{AFX_MSG_MAP(YinglizongbiaoDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// YinglizongbiaoDlg message handlers
