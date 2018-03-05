// ZhucechubansheDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "ZhucechubansheDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ZhucechubansheDlg dialog


ZhucechubansheDlg::ZhucechubansheDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ZhucechubansheDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(ZhucechubansheDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ZhucechubansheDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ZhucechubansheDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ZhucechubansheDlg, CDialog)
	//{{AFX_MSG_MAP(ZhucechubansheDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ZhucechubansheDlg message handlers
