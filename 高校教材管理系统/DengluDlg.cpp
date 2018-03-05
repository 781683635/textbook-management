// DengluDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "DengluDlg.h"        //包含登陆的头文件
#include "ZhuceDlg.h"         //包含注册界面的头文件
#include "ADOConn.h"          //包含封装的数据库的头文件
#include "Users.h"            //包含封装类的头文件
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
//#include "高校教材管理系统View.h"
/////////////////////////////////////////////////////////////////////////////
// DengluDlg dialog


DengluDlg::DengluDlg(CWnd* pParent /*=NULL*/)
	: CDialog(DengluDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(DengluDlg)
	m_Pwd = _T("");
	m_UserName = _T("");
	//}}AFX_DATA_INIT
}


void DengluDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DengluDlg)
	DDX_Text(pDX, IDC_EDIT_MIMA, m_Pwd);
	DDX_Text(pDX, IDC_EDIT_YONGHUMING, m_UserName);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DengluDlg, CDialog)
	//{{AFX_MSG_MAP(DengluDlg)
	ON_BN_CLICKED(IDC_BUTTON_DENGLU, OnButtonDenglu)
	ON_BN_CLICKED(IDC_BUTTON_ZHUCE, OnButtonZhuce)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


void DengluDlg::OnButtonDenglu() 
{  
	UpdateData(TRUE);                               //将对话框中编辑框的数据读取到成员变量中
	CString      dengluming;
	CString      mima;
	CString      yonghuleixing;                     //设置几个变量
	dengluming = m_UserName;                        //给当前登陆名赋值
	if (m_UserName == "")
	{
		MessageBox("请输入用户名");
		return;
	}
	if (m_Pwd == "")
	{
		MessageBox("请输入密码");
		return;
	}                                                //检查数据有效性
    try
	{
	ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();                        //打开数据库
	_bstr_t vSQL;
	vSQL = "SELECT * FROM 用户信息表 WHERE 用户名 ='" + dengluming + "'";          //设置SELECT语句
	m_AdoConn.ExecuteSQL(vSQL);	                                                   //执行SELETE语句
	_RecordsetPtr m_pRecordset;                                                    //设置记录集指针                            
	m_pRecordset = m_AdoConn.GetRecordSet(vSQL);                                   //获得查询的结果
	mima = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("密码");                     //给密码赋值
	yonghuleixing = atoi((LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("用户类型"));      //给用户类型赋值
    vSQL = "UPDATE 系统保留表 SET 用户名='" + dengluming + "' WHERE 类型='当前用户'";   //记录当前用户到系统保留表
    m_AdoConn.ExecuteSQL(vSQL);	                                                        //执行UPDATE语句 
	m_AdoConn.ExitConnect();
	}
   catch(...)                                                                     //获取错误信息
	{
		MessageBox("用户名错误,或连接数据库失败,请注册或联系管理员!");
		return;
   }                                                                              //断开与数据库的连接

	if (mima != m_Pwd)
	{
		MessageBox("密码错误，请检查或联系管理员!");
		return;
	}	                                                                     //如果读取的数据与用户输入数据不同，则返回
    MessageBox("欢迎,登陆成功!");
	CDialog::OnOK();                                                         //关闭对话框,进入主界面		
}

void DengluDlg::OnButtonZhuce() 
{

	ZhuceDlg dlg;
	dlg.DoModal();                                                            //注册按钮打开注册界面

}
