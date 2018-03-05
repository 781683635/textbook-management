// Users.cpp: implementation of the CUsers class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Users.h"
#include "ADOConn.h"


#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CUsers::CUsers()
{
	UserName = "";
	UserPwd = "";
	UserType = 0;

}

CUsers::~CUsers()
{

}


//数据库操作
int CUsers::HaveName(CString cUserName)
{	
	//连接数据库
	ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();
	//设置SELECT语句
	_bstr_t vSQL;
	vSQL = "SELECT * FROM 用户信息表 WHERE 用户名='" + cUserName + "'";
	
	//执行SELECT语句
	_RecordsetPtr m_pRecordset;
	m_pRecordset = m_AdoConn.GetRecordSet(vSQL);
	if (m_pRecordset->adoEOF)
		return -1;
	else
		return 1;

	//断开与数据库的连接
	m_AdoConn.ExitConnect();
}

	
void CUsers::sql_insert()
{	
	//连接数据库
	ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();
	//设置INSERT语句
	CString strType;
	strType.Format("%d", UserType);

	_bstr_t vSQL;
	vSQL = "INSERT INTO 用户信息表 VALUES('" + UserName + "','" + UserPwd + "'," 
		+ strType + ")";	
	//执行INSERT语句
	m_AdoConn.ExecuteSQL(vSQL);	
	//断开与数据库的连接
	m_AdoConn.ExitConnect();
}

void CUsers::sql_updatePwd(CString cUserName)
{
	//连接数据库
	ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();
	//设置UPDATE语句
	CString strType;
	strType.Format("%d", UserType);

	_bstr_t vSQL;
	vSQL = "UPDATE 用户信息表 SET 密码='" + UserPwd + "' WHERE 用户名='" + cUserName + "'";
	//执行UPDATE语句
	m_AdoConn.ExecuteSQL(vSQL);	
	//断开与数据库的连接
	m_AdoConn.ExitConnect();
}

void CUsers::sql_delete(CString cUserName)
{
	//连接数据库
	ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();
	//设置DELETE语句
	_bstr_t vSQL;
	vSQL = "DELETE FROM 用户信息表 WHERE 用户名='" + cUserName	+ "'";
	//执行DELETE语句
	m_AdoConn.ExecuteSQL(vSQL);	
	//断开与数据库的连接
	m_AdoConn.ExitConnect();
}

//根据员工编号读取所有字段值
void CUsers::GetData(CString cUserName)
{
	//连接数据库
	ADOConn m_AdoConn;
	m_AdoConn.OnInitADOConn();
	//设置SELECT语句
	_bstr_t vSQL;
	vSQL = "SELECT * FROM 用户信息表 WHERE 用户名 ='" + cUserName + "'";
	//执行SELETE语句
	_RecordsetPtr m_pRecordset;
	m_pRecordset = m_AdoConn.GetRecordSet(vSQL);

	//返回各列的值
	if (m_pRecordset->adoEOF)
		CUsers();
	else
	{
		UserName = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("用户名");       //cUserName;
		UserPwd = (LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("密码");
		UserType = atoi((LPCTSTR)(_bstr_t)m_pRecordset->GetCollect("用户类型"));
	}
	//断开与数据库的连接
	m_AdoConn.ExitConnect();
}
