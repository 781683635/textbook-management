// YonghugenggaimimaDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "YonghugenggaimimaDlg.h"
#include "ADOConn.h"    //包含封装的数据库的头文件
#include "Users.h"      //包含封装类的头文件

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// YonghugenggaimimaDlg dialog


YonghugenggaimimaDlg::YonghugenggaimimaDlg(CWnd* pParent /*=NULL*/)
	: CDialog(YonghugenggaimimaDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(YonghugenggaimimaDlg)
	m_jiumima = _T("");
	m_xinmima = _T("");
	m_chongfumima = _T("");
	//}}AFX_DATA_INIT
}


void YonghugenggaimimaDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(YonghugenggaimimaDlg)
	DDX_Text(pDX, IDC_EDIT_JIUMIMA, m_jiumima);
	DDX_Text(pDX, IDC_EDIT_XINMIMA, m_xinmima);
	DDX_Text(pDX, IDC_EDITCHONGFUXINMIMA, m_chongfumima);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(YonghugenggaimimaDlg, CDialog)
	//{{AFX_MSG_MAP(YonghugenggaimimaDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// YonghugenggaimimaDlg message handlers

void YonghugenggaimimaDlg::OnOK() 
{   
	CString    yonghuming;
	CString    mima;
	UpdateData(TRUE); // TODO: Add extra validation here
	 try
	{
	ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();                        //打开数据库
	_bstr_t vSQL;
	vSQL = "SELECT * FROM 系统保留表 WHERE 类型 ='当前用户'";
	m_AdoConn.ExecuteSQL(vSQL);	                                                   //执行SELETE语句
	_RecordsetPtr m_pRecordset;                                                    //设置记录集指针                            
	m_pRecordset = m_AdoConn.GetRecordSet(vSQL);                                   //获得查询的结果
	yonghuming = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("用户名");
    vSQL = "SELECT * FROM 用户信息表 WHERE 用户名 ='" + yonghuming + "'";
    m_pRecordset.CreateInstance(__uuidof(Recordset));                              //初始化记录集指针
	m_pRecordset = m_AdoConn.GetRecordSet(vSQL); 
    mima = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("密码");
    m_AdoConn.ExitConnect();                           
    }
   catch(...)                                                                     //获取错误信息
	{
		MessageBox("获取密码失败，请联系管理员");
		return;
	}
    if (m_jiumima != mima)
	{
		MessageBox("密码错误，不允许修改密码!");
		return;
	}

	if (m_xinmima != m_chongfumima)
	{
		MessageBox("两次密码输入不相同，请检查后重新输入!");
		return;
	}
    if (mima == m_xinmima)
	{
		MessageBox("新密码和旧密码一致!");
		return;
	}
    UpdateData(FALSE);
	try
	{
	ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();                        //打开数据库
	_bstr_t vSQL;
    vSQL = "UPDATE 用户信息表 SET 密码='" + m_xinmima + "' WHERE 用户名='" + yonghuming + "'"; 
	m_AdoConn.ExecuteSQL(vSQL);
    m_AdoConn.ExitConnect();                           
    }
   catch(...)                                                                     //获取错误信息
	{
		MessageBox("设置密码失败，请联系管理员");
		return;
	}
   MessageBox("成功修改密码!");
 

	CDialog::OnOK();
}
