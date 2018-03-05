// ZhuceDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "ZhuceDlg.h"
#include "ADOConn.h"               //包含封装的数据库的头文件

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ZhuceDlg dialog


ZhuceDlg::ZhuceDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ZhuceDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(ZhuceDlg)
	m_yonghuming = _T("");
	m_mima = _T("");
	m_querenmima = _T("");
	m_xingming = _T("");
	m_zhuanye = _T("");
	m_lianxifangshi = _T("");
	m_beizhu = _T("");
	m_xingbie = _T("");
	m_chushengriqi = 0;
	//}}AFX_DATA_INIT
}


void ZhuceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ZhuceDlg)
	DDX_Text(pDX, IDC_EDIT_YONGHUMING, m_yonghuming);
	DDX_Text(pDX, IDC_EDIT_MIMA, m_mima);
	DDX_Text(pDX, IDC_EDIT_QUERENMIMA, m_querenmima);
	DDX_Text(pDX, IDC_EDIT_XINGMING, m_xingming);
	DDX_Text(pDX, IDC_EDIT_ZHUANYE, m_zhuanye);
	DDX_Text(pDX, IDC_EDIT_LIANXIFANGSHI, m_lianxifangshi);
	DDX_Text(pDX, IDC_EDIT_BEIZHU, m_beizhu);
	DDX_CBString(pDX, IDC_COMBO_XINGBIE, m_xingbie);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER, m_chushengriqi);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ZhuceDlg, CDialog)
	//{{AFX_MSG_MAP(ZhuceDlg)
	ON_BN_CLICKED(IDC_BUTTON_ZHUCE, OnButtonZhuce)
	ON_BN_CLICKED(IDC_BUTTON_QUXIAO, OnButtonQuxiao)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ZhuceDlg message handlers

void ZhuceDlg::OnButtonZhuce() 
{
	UpdateData(TRUE);                   //将对话框中编辑框的数据读取到成员变量中
    if (m_yonghuming == "")
	{
		MessageBox("请输入用户名!");
		return;
	}
	if (m_mima == "")
	{
		MessageBox("请输入密码!");
		return;
	}                                           
	if (m_mima != m_querenmima)
	{
		MessageBox("两次输入的密码不正确，请重新输入!");
		return;
	}
	if (m_xingming == "")
	{
		MessageBox("请输入姓名!");
		return;
	}
	if (m_xingbie == "")
	{
		MessageBox("请选择姓别!");
		return;
	}
	if (m_lianxifangshi == "")
	{
		MessageBox("请输入联系方式!");
		return;
	} 
	if (m_zhuanye == "")
	{
		MessageBox("请输入专业!");
		return;
	}                                                      //检查数据有效性
    ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();                            //连接数据库
	CString yonghuming;
	CString mima;
	CString xingming;
	CString xingbie;
	CString lianxifangshi;
	CString zhuanye;
	CString chushengriqi;
	CString beizhu;
	CString yonghuleixing;
	yonghuming    = m_yonghuming;
	yonghuleixing = "1";
	mima          = m_mima;
	xingming      = m_xingming;
	xingbie       = m_xingbie;
	lianxifangshi = m_lianxifangshi;
	zhuanye       = m_zhuanye;
	chushengriqi  = 1995-01-15;
	beizhu        = m_beizhu;
	try
	{
	bstr_t vSQL;
	vSQL = "INSERT INTO 用户信息表(用户名,密码,用户类型,姓名,性别,联系方式,专业,备注) VALUES('" + yonghuming + "','" + mima + "','" + yonghuleixing + "','" + xingming + "','" + xingbie + "','" + lianxifangshi + "','" + zhuanye + "','" + beizhu + "')";
	//执行INSERT语句
	m_AdoConn.ExecuteSQL(vSQL);	
	//断开与数据库的连接
	m_AdoConn.ExitConnect();
	}
	catch(...)
	{
		MessageBox("注册失败，请联系管理员");
		return;
	}
	MessageBox("成功注册!");
	CDialog::OnOK();     
}

void ZhuceDlg::OnButtonQuxiao() 
{
	CDialog::OnOK();// TODO: Add your control notification handler code here
	
}
