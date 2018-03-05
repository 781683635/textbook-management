// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "高校教材管理系统.h"

#include "MainFrm.h"
#include "DengluDlg.h"                  //登陆界面的头文件
#include "BenxueqisuoxujiaocaiDlg.h"    //查看本学期所需教材头文件
#include "XiugaigerenxinxiDlg.h"        //查看本学期所需教材头文件
#include "YonghugenggaimimaDlg.h"       //用户修改密码头文件
#include "JiaocaituidingDlg.h"          //教材退订头文件
#include "LianxiguanliyuanDlg.h"        //联系管理员头文件
#include "JiaocaijibenxinxiDlg.h"       //教材基本信息头文件
#include "JiaocaijinhuoDlg.h"           //教材进货头文件
#include "JiaocaichukuDlg.h"            //教材出库头文件
#include "KucunguanliDlg.h"             //库存管理头文件
#include "KuweiguanliDlg.h"             //库位管理头文件
#include "GenjujiaocaihaoDlg.h"         //根据教材号预定头文件
#include "GenjujiaocaimingDlg.h"        //根据教材名预定头文件
#include "FenleixuanzeyudingDlg.h"      //分类选择预定头文件
#include "ChakansuoyoujiaocaiDlg.h"     //查看所有教材头文件
#include "JinhuocaiwuguanliDlg.h"       //进货财务管理头文件
#include "ChuhuocaiwuguanliDlg.h"       //出货财务管理头文件
#include "YuefencaiwuguanliDlg.h"       //月份财务管理头文件
#include "NianfencaiwuguanliDlg.h"      //年份财务管理头文件
#include "YinglizongbiaoDlg.h"          //盈利总表头文件
#include "YonghugerenguanliDlg.h"       //用户个人管理头文件
#include "BanjifuzerenguanliDlg.h"      //班级负责人管理头文件
#include "GongyingshangguanliDlg.h"     //供应商管理头文件
#include "ChubansheguanliDlg.h"         //出版社管理头文件
#include "ZhuceguanliyuanDlg.h"         //注册管理员头文件
#include "XiugaiguanliyuanmimaDlg.h"    //修改管理员密码文件
#include "XiugaiyonghujibenxinxiDlg.h"  //修改用户基本信息头文件
#include "YonghuxiaoxiDlg.h"            //用户消息头文件







#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_COMMAND(ID_MENU_CHAKANBENXUEQISUOXUJIAOCAI, OnMenuChakanbenxueqisuoxujiaocai)
	ON_COMMAND(ID_MENU_XIUGAIGERENXINXI, OnMenuXiugaigerenxinxi)
	ON_COMMAND(ID_MENU_GENGGAIMIMA, OnMenuGenggaimima)
	ON_COMMAND(ID_MENU_JIAOCAITUIDING, OnMenuJiaocaituiding)
	ON_COMMAND(ID_MENU_LIANXIGUANLIYUAN, OnMenuLianxiguanliyuan)
	ON_COMMAND(ID_MENU_JIAOCAIJIBENXINXI, OnMenuJiaocaijibenxinxi)
	ON_COMMAND(ID_MENU_JIAOCAIJINHUO, OnMenuJiaocaijinhuo)
	ON_COMMAND(ID_MENU_JIAOCAICHUKU, OnMenuJiaocaichuku)
	ON_COMMAND(ID_MENU_KUCUNGUANLI, OnMenuKucunguanli)
	ON_COMMAND(ID_MENU_KUWEIGUANLI, OnMenuKuweiguanli)
	ON_COMMAND(ID_MENU_GENJUJIAOCAIHAOYUDING, OnMenuGenjujiaocaihaoyuding)
	ON_COMMAND(ID_MENU_GENJUJIAOCAIMINGYUDING, OnMenuGenjujiaocaimingyuding)
	ON_COMMAND(ID_MENU_FENLEIXUANZEYUDING, OnMenuFenleixuanzeyuding)
	ON_COMMAND(ID_MENU_CHAKANSUOYOUJIAOCAI, OnMenuChakansuoyoujiaocai)
	ON_COMMAND(ID_MENU_JINHUOCAIWUGUANLI, OnMenuJinhuocaiwuguanli)
	ON_COMMAND(ID_MENU_CHUHUOCAIWUGUANLI, OnMenuChuhuocaiwuguanli)
	ON_COMMAND(ID_MENU_YUEFENCAIWUGUANLI, OnMenuYuefencaiwuguanli)
	ON_COMMAND(ID_MENU_NIANFENCAIWUGUANLI, OnMenuNianfencaiwuguanli)
	ON_COMMAND(ID_MENU_YINGLIZONGBIAO, OnMenuYinglizongbiao)
	ON_COMMAND(ID_MENU_YONGHUGERENGUANLI, OnMenuYonghugerenguanli)
	ON_COMMAND(ID_MENU_BANJIFUZERENGUANLI, OnMenuBanjifuzerenguanli)
	ON_COMMAND(ID_MENU_GONGYINGSHANGGUANLI, OnMenuGongyingshangguanli)
	ON_COMMAND(ID_MENU_CHUBANSHEGUANLI, OnMenuChubansheguanli)
	ON_COMMAND(ID_MENU_ZHUCEXINGUANLIYUAN, OnMenuZhucexinguanliyuan)
	ON_COMMAND(ID_MENU_XIUGAIGUANLIYUANMIMA, OnMenuXiugaiguanliyuanmima)
	ON_COMMAND(ID_MENU_XIUGAIYONGHUJIBENXINXI, OnMenuXiugaiyonghujibenxinxi)
	ON_COMMAND(ID_MENU_YONGHUXIAOXI, OnMenuYonghuxiaoxi)
	ON_COMMAND(ID_MENU_QIEHUANYONGHU, OnMenuQiehuanyonghu)
	ON_COMMAND(ID_MENU_TUICHUDENGLU, OnMenuTuichudenglu)
	ON_COMMAND(ID_MENU_BANGZHU, OnMenuBangzhu)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{   
	////////////////////////////////////////////////////
	DengluDlg dlg; 
    if(IDOK == dlg.DoModal()) {
 
	}
    else 
    exit(0);
	/////////////////////////////新加入的登陆代码，代码作用是程序进去的第一个界面
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs) //在这里进行总窗口的大小和样式的设置
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs 来修改窗口类或样式
	//cs.x = 300;  //窗口的X坐标为
    //cs.y = 300;  //窗口的Y坐标为
	//cs.dwExStyle &= ~WS_EX_CLIENTEDGE;
    //cs.lpszClass = AfxRegisterWndClass(0);

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers


void CMainFrame::OnMenuChakanbenxueqisuoxujiaocai() 
{
	BenxueqisuoxujiaocaiDlg dlg;
    dlg.DoModal();                      // 菜单打开查询本学期所需教材
	
}

void CMainFrame::OnMenuXiugaigerenxinxi() 
{
	XiugaigerenxinxiDlg dlg;
    dlg.DoModal();                     //  菜单打开修改个人信息
	
}

void CMainFrame::OnMenuGenggaimima() 
{
	
	YonghugenggaimimaDlg dlg;
    dlg.DoModal(); // 菜单打开修改密码
	
}

void CMainFrame::OnMenuJiaocaituiding() 
{
	JiaocaituidingDlg dlg;
    dlg.DoModal();              // 菜单打开教材退订
	
}

void CMainFrame::OnMenuLianxiguanliyuan() 
{
	LianxiguanliyuanDlg dlg;
    dlg.DoModal();              // 菜单打开联系管理员
	
}

void CMainFrame::OnMenuJiaocaijibenxinxi() 
{
	JiaocaijibenxinxiDlg dlg;
    dlg.DoModal();              // 菜单打开教材基本信息
	
}

void CMainFrame::OnMenuJiaocaijinhuo() 
{
	JiaocaijinhuoDlg dlg;
    dlg.DoModal();              // 菜单打开教材进货
	
}

void CMainFrame::OnMenuJiaocaichuku() 
{
	JiaocaichukuDlg dlg;
    dlg.DoModal();              // 菜单打开教材出库
	
}

void CMainFrame::OnMenuKucunguanli() 
{
	KucunguanliDlg dlg;
    dlg.DoModal();              // 菜单打开库存管理
	
}

void CMainFrame::OnMenuKuweiguanli() 
{
	KuweiguanliDlg dlg;
    dlg.DoModal();              // 菜单打开库位管理
	
}

void CMainFrame::OnMenuGenjujiaocaihaoyuding() 
{
	GenjujiaocaihaoDlg dlg;
    dlg.DoModal();              // 菜单打开根据教材号预定教材
	
}

void CMainFrame::OnMenuGenjujiaocaimingyuding() 
{
	GenjujiaocaimingDlg dlg;
    dlg.DoModal();              // 菜单打开根据教材名预定教材
	
}

void CMainFrame::OnMenuFenleixuanzeyuding() 
{
	FenleixuanzeyudingDlg dlg;
    dlg.DoModal();              // 菜单打开分类选择预定
	
}

void CMainFrame::OnMenuChakansuoyoujiaocai() 
{
	CChakansuoyoujiaocaiDlg dlg;
    dlg.DoModal();              // 菜单打开查看所有教材
	
}

void CMainFrame::OnMenuJinhuocaiwuguanli() 
{
	JinhuocaiwuguanliDlg dlg;
    dlg.DoModal();              // 菜单打开进货财务管理
	
}

void CMainFrame::OnMenuChuhuocaiwuguanli() 
{
	CChuhuocaiwuguanliDlg dlg;
    dlg.DoModal();              // 菜单打开出货财务管理
	
}

void CMainFrame::OnMenuYuefencaiwuguanli() 
{
	YuefencaiwuguanliDlg dlg;
    dlg.DoModal();              // 菜单打开月份财务管理
	
}

void CMainFrame::OnMenuNianfencaiwuguanli() 
{
	NianfencaiwuguanliDlg dlg;
    dlg.DoModal();              // 菜单打开年份财务管理
	
}

void CMainFrame::OnMenuYinglizongbiao() 
{
	YinglizongbiaoDlg dlg;
    dlg.DoModal();              // 菜单打开盈利总表
	
}

void CMainFrame::OnMenuYonghugerenguanli() 
{
	YonghugerenguanliDlg dlg;
    dlg.DoModal();              // 菜单打开用户个人管理
	
}

void CMainFrame::OnMenuBanjifuzerenguanli() 
{
	BanjifuzerenguanliDlg dlg;
    dlg.DoModal();              // 菜单打开班级负责人管理
	
}

void CMainFrame::OnMenuGongyingshangguanli() 
{
	GongyingshangguanliDlg dlg;
    dlg.DoModal();              // 菜单打开供应商管理
}

void CMainFrame::OnMenuChubansheguanli() 
{
	CChubansheguanliDlg dlg;
    dlg.DoModal();              // 菜单打开出版社管理
	
}

void CMainFrame::OnMenuZhucexinguanliyuan() 
{
	ZhuceguanliyuanDlg dlg;
    dlg.DoModal();              // 菜单打开注册管理员
	
}

void CMainFrame::OnMenuXiugaiguanliyuanmima() 
{
	XiugaiguanliyuanmimaDlg dlg;
    dlg.DoModal();              // 菜单打开注册管理员
	
}

void CMainFrame::OnMenuXiugaiyonghujibenxinxi() 
{
	XiugaiyonghujibenxinxiDlg dlg;
    dlg.DoModal();              // 菜单打开修改用户基本信息
	
}

void CMainFrame::OnMenuYonghuxiaoxi() 
{
	YonghuxiaoxiDlg dlg;
    dlg.DoModal();              // 菜单打开用户消息
	
}

void CMainFrame::OnMenuQiehuanyonghu() 
{
	// 菜单打开切换用户
	
}

void CMainFrame::OnMenuTuichudenglu() 
{
	// 菜单打开退出登录
	
}

void CMainFrame::OnMenuBangzhu() 
{
	// 菜单打开帮助
	
}
