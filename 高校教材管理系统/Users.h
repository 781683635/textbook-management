// Users.h: interface for the CUsers class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_USERS_H__451F3215_5B38_48AF_8D6D_A4361016F23E__INCLUDED_)
#define AFX_USERS_H__451F3215_5B38_48AF_8D6D_A4361016F23E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CUsers  
{
public:
	CString UserName;
	CString UserPwd;
	int UserType;
	
public:
	CUsers();
	virtual ~CUsers();

	//数据库操作
	int HaveName(CString cUserName); //判断指定用户名是否存在
	void sql_insert();  
	void sql_updatePwd(CString cUserName);
	void sql_delete(CString cUserName);
	//读取所有字段值
	void GetData(CString cUserName);
};

#endif // !defined(AFX_USERS_H__451F3215_5B38_48AF_8D6D_A4361016F23E__INCLUDED_)
