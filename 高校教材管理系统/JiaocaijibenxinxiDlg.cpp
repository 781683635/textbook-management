// JiaocaijibenxinxiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "JiaocaijibenxinxiDlg.h"
#include "ADOConn.h" 
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// JiaocaijibenxinxiDlg dialog


JiaocaijibenxinxiDlg::JiaocaijibenxinxiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(JiaocaijibenxinxiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(JiaocaijibenxinxiDlg)
	m_chaxuntiaojian = _T("");
	m_chaxunneirong = _T("");
	m_zhidujiaocaibianhao = _T("");
	m_zhidujiaocaimingcheng = _T("");
	//}}AFX_DATA_INIT
}


void JiaocaijibenxinxiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(JiaocaijibenxinxiDlg)
	DDX_CBString(pDX, IDC_COMBO_CHAXUNTIAOJIAN, m_chaxuntiaojian);
	DDX_Text(pDX, IDC_EDIT_CHAXUNNEIRONG, m_chaxunneirong);
	DDX_Text(pDX, IDC_EDIT_ZHIDUJIAOCAIBIANHAO, m_zhidujiaocaibianhao);
	DDX_Text(pDX, IDC_EDIT_ZHIDUJIAOCAIMINGCHENG, m_zhidujiaocaimingcheng);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(JiaocaijibenxinxiDlg, CDialog)
	//{{AFX_MSG_MAP(JiaocaijibenxinxiDlg)
	ON_BN_CLICKED(IDC_BUTTON_CHAXUN, OnButtonChaxun)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// JiaocaijibenxinxiDlg message handlers

void JiaocaijibenxinxiDlg::OnButtonChaxun() 
{
	UpdateData(TRUE);                   //将对话框中编辑框的数据读取到成员变量中
    if (m_chaxuntiaojian == "")
	{
		MessageBox("请选择查询条件!");
		return;
	}
	if (m_chaxunneirong == "")
	{
		MessageBox("请输入查询内容!");
		return;
	}
	
	try
	{
	ADOConn m_AdoConn;                          //连接数据库
	m_AdoConn.OnInitADOConn();                     
	_bstr_t vSQL; 
	if (m_chaxuntiaojian == "教材ID")
	{
       vSQL = "SELECT * FROM 教材基本信息表 WHERE 教材ID ='" + m_chaxunneirong + "'";
	   m_AdoConn.ExecuteSQL(vSQL);	
	}
	if (m_chaxuntiaojian == "书号")
	{
       vSQL = "SELECT * FROM 教材基本信息表 WHERE 书号 ='" + m_chaxunneirong + "'";
	   m_AdoConn.ExecuteSQL(vSQL);	
	}
	if (m_chaxuntiaojian == "书名")
	{
       vSQL = "SELECT * FROM 教材基本信息表 WHERE 书名 ='" + m_chaxunneirong + "'";
	   m_AdoConn.ExecuteSQL(vSQL);	
	}
	if (m_chaxuntiaojian == "条码")
	{
       vSQL = "SELECT * FROM 教材基本信息表 WHERE 条码 ='" + m_chaxunneirong + "'";
	   m_AdoConn.ExecuteSQL(vSQL);	
	}
 	_RecordsetPtr m_pRecordset;  
	m_pRecordset.CreateInstance(__uuidof(Recordset));                              //初始化记录集指针
	m_pRecordset = m_AdoConn.GetRecordSet(vSQL);  
    m_zhidujiaocaibianhao = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("教材ID");           //进行赋值给变量
	m_zhidujiaocaimingcheng = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("书名");
    m_AdoConn.ExitConnect();                         
	UpdateData(FALSE);
	}
	
    catch(...)                                                                     //获取错误信息
	{
		MessageBox("查询失败，没有找到你所要查询的记录!");
		return;
	}
	
}

BOOL JiaocaijibenxinxiDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
