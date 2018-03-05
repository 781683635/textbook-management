// XiugaigerenxinxiDlg.cpp : implementation file
//

#include "stdafx.h"
#include "高校教材管理系统.h"
#include "XiugaigerenxinxiDlg.h"
#include "ADOConn.h"               //包含封装的数据库的头文件
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// XiugaigerenxinxiDlg dialog


XiugaigerenxinxiDlg::XiugaigerenxinxiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(XiugaigerenxinxiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(XiugaigerenxinxiDlg)
	m_beizhu = _T("");
	m_lianxifangshi = _T("");
	m_mima = _T("");
	m_querenmima = _T("");
	m_xingming = _T("");
	m_yonghuming = _T("");
	m_zhuanye = _T("");
	m_chushengriqi = 0;
	m_xingbie = _T("");
	//}}AFX_DATA_INIT
}


void XiugaigerenxinxiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(XiugaigerenxinxiDlg)
	DDX_Text(pDX, IDC_EDIT_BEIZHU, m_beizhu);
	DDX_Text(pDX, IDC_EDIT_LIANXIFANGSHI, m_lianxifangshi);
	DDX_Text(pDX, IDC_EDIT_MIMA, m_mima);
	DDX_Text(pDX, IDC_EDIT_QUERENMIMA, m_querenmima);
	DDX_Text(pDX, IDC_EDIT_XINGMING, m_xingming);
	DDX_Text(pDX, IDC_EDIT_YONGHUMING, m_yonghuming);
	DDX_Text(pDX, IDC_EDIT_ZHUANYE, m_zhuanye);
	DDX_DateTimeCtrl(pDX, IDC_DATETIMEPICKER, m_chushengriqi);
	DDX_CBString(pDX, IDC_COMBO_XINGBIE, m_xingbie);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(XiugaigerenxinxiDlg, CDialog)
	//{{AFX_MSG_MAP(XiugaigerenxinxiDlg)
	ON_BN_CLICKED(IDC_BUTTON_XIUGAI, OnButtonXiugai)
	ON_BN_CLICKED(IDC_BUTTON_HUOQUWODEXINXI, OnButtonHuoquwodexinxi)
	ON_BN_CLICKED(IDC_BUTTON_QUXIAO, OnButtonQuxiao)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// XiugaigerenxinxiDlg message handlers

void XiugaigerenxinxiDlg::OnButtonXiugai() 
{
	UpdateData(TRUE);                   //将对话框中编辑框的数据读取到成员变量中
    if (m_yonghuming == "")
	{
		MessageBox("请先获取个人信息!");
		return;
	}
	if (m_mima == "")
	{
		MessageBox("请先获取个人信息!");
		return;
	}                                           
	if (m_mima != m_querenmima)
	{
		MessageBox("两次输入的密码不正确，不允许修改个人信息!");
		return;
	}
	if (m_xingming == "")
	{
		MessageBox("请输入姓名!");
		return;
	}
	if (m_xingbie == "")
	{
		MessageBox("请选择性别!");
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
	}
	if (m_beizhu == "")
	{
		m_beizhu = "无";
        UpdateData(FALSE);
		MessageBox("由于备注没有填写，已经自动改为无!");
		return;
	}                                           //检查数据有效性
	UpdateData(TRUE);
	ADOConn m_AdoConn;                          //连接数据库
	m_AdoConn.OnInitADOConn();                     
	_bstr_t vSQL;                               //设置UPDATE语句
	vSQL = "UPDATE 用户信息表 SET 姓名='" + m_xingming + "' WHERE 用户名='" + m_yonghuming + "'"; 	
	m_AdoConn.ExecuteSQL(vSQL);	                //执行UPDATE语句
    vSQL = "UPDATE 用户信息表 SET 性别='" + m_xingbie + "' WHERE 用户名='" + m_yonghuming + "'"; 	
	m_AdoConn.ExecuteSQL(vSQL);	                //执行UPDATE语句
	vSQL = "UPDATE 用户信息表 SET 联系方式='" + m_lianxifangshi + "' WHERE 用户名='" + m_yonghuming + "'"; 	
	m_AdoConn.ExecuteSQL(vSQL);	                //执行UPDATE语句
	vSQL = "UPDATE 用户信息表 SET 专业='" + m_zhuanye + "' WHERE 用户名='" + m_yonghuming + "'"; 	
	m_AdoConn.ExecuteSQL(vSQL);	                //执行UPDATE语句
	vSQL = "UPDATE 用户信息表 SET 备注='" + m_beizhu + "' WHERE 用户名='" + m_yonghuming + "'"; 	
	m_AdoConn.ExecuteSQL(vSQL);	                //执行UPDATE语句
	m_AdoConn.ExitConnect();                         
	CDialog::OnOK();                         //关闭对话框    
	
}

void XiugaigerenxinxiDlg::OnButtonHuoquwodexinxi() 
{
	CString yonghuming;                                                            //对变量进行定义                                                       
                            
    try
	{
	ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();                                                     //打开数据库
	_bstr_t vSQL;
	vSQL = "SELECT * FROM 系统保留表 WHERE 类型 ='当前用户'";                      //设置SELECT语句
	m_AdoConn.ExecuteSQL(vSQL);	                                                   //执行SELETE语句
	_RecordsetPtr m_pRecordset;                                                    //设置记录集指针                            
	m_pRecordset = m_AdoConn.GetRecordSet(vSQL);                                   //获得查询的结果
	yonghuming = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("用户名");             //给用户名赋值              
	vSQL = "SELECT * FROM 用户信息表 WHERE 用户名 ='" + yonghuming + "'";          //在新表中用用户名找到信息
	m_pRecordset.CreateInstance(__uuidof(Recordset));                              //初始化记录集指针
	m_pRecordset = m_AdoConn.GetRecordSet(vSQL);                                   //获得记录集
    m_yonghuming = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("用户名");           //进行赋值给变量
	m_mima = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("密码");
	m_xingming = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("姓名");
	m_xingbie = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("性别");
	m_lianxifangshi = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("联系方式");
	m_zhuanye = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("专业");
	m_beizhu = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("备注");
    m_AdoConn.ExitConnect();                         
	UpdateData(FALSE);                                                            //把变量的值赋值给控件
	}
   catch(...)                                                                     //获取错误信息
	{
		MessageBox("获取个人信息失败，请联系管理员");
		return;
	}
}




void XiugaigerenxinxiDlg::OnButtonQuxiao() 
{
	CDialog::OnOK();// TODO: Add your control notification handler code here
	
}
