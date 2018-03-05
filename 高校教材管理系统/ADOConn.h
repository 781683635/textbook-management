// ADOConn.h: interface for the ADOConn class.
//
//////////////////////////////////////////////////////////////////////
//#import "c:\Program Files\Common Files\System\ado\msado15.dll" no_namespace rename("EOF","adoEOF") rename("BOF","adoBOF")
#if !defined(AFX_ADOCONN_H__AF13F190_AA90_4F42_A095_80F2D28FACC7__INCLUDED_)
#define AFX_ADOCONN_H__AF13F190_AA90_4F42_A095_80F2D28FACC7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class ADOConn  
{
// 定义变量
public:
	//添加一个指向Connection对象的指针:
	_ConnectionPtr m_pConnection;
	//添加一个指向Recordset对象的指针:
	_RecordsetPtr m_pRecordset;
// 定义方法
public:
	ADOConn();
	virtual ~ADOConn();
	// 初始化—连接数据库
	void  OnInitADOConn();
	// 执行查询
	_RecordsetPtr& GetRecordSet(_bstr_t bstrSQL);
	// 执行SQL语句，Insert Update _variant_t
	BOOL ExecuteSQL(_bstr_t bstrSQL);
	void ExitConnect();

};

#endif // !defined(AFX_ADOCONN_H__AF13F190_AA90_4F42_A095_80F2D28FACC7__INCLUDED_)
