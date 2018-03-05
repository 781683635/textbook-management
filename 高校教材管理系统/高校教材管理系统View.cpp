// 高校教材管理系统View.cpp : implementation of the CMyView class
//

#include "stdafx.h"
#include "高校教材管理系统.h"

#include "高校教材管理系统Doc.h"
#include "高校教材管理系统View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyView

IMPLEMENT_DYNCREATE(CMyView, CView)

BEGIN_MESSAGE_MAP(CMyView, CView)
	//{{AFX_MSG_MAP(CMyView)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMyView construction/destruction

CMyView::CMyView()
{
	// TODO: add construction code here

}

CMyView::~CMyView()
{
}

BOOL CMyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
    // TODO: 在此处通过修改
	return CView::PreCreateWindow(cs); 
}

/////////////////////////////////////////////////////////////////////////////
// CMyView drawing

void CMyView::OnDraw(CDC* pDC)
{
	CMyDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMyView diagnostics

#ifdef _DEBUG
void CMyView::AssertValid() const
{
	CView::AssertValid();
}

void CMyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMyDoc* CMyView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMyDoc)));
	return (CMyDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMyView message handlers

//DEL BOOL CMyView::OnEraseBkgnd(CDC* pDC)  //设置主窗口图片背景
//DEL {
//DEL 	CDC MemDC;
//DEL 	//CBitmap对象
//DEL 	CBitmap Bitmap,*pOldBitmap;
//DEL 	//BITMAP句柄
//DEL 	BITMAP bm;
//DEL 	//加载位图
//DEL 	Bitmap.LoadBitmap(IDB_DENGLUJIEMIAN);
//DEL 	//将位图资源与句柄绑定
//DEL 	Bitmap.GetObject(sizeof(BITMAP),&bm);
//DEL 	//创建与内存兼容的DC
//DEL 	MemDC.CreateCompatibleDC(pDC);
//DEL 	//替换原位图
//DEL 	pOldBitmap=(CBitmap*)(MemDC.SelectObject(&Bitmap));
//DEL 	//获取绘制的区域
//DEL 	CRect rcClient;
//DEL 	GetClientRect(&rcClient);
//DEL 	//绘制到客户区
//DEL 	pDC->BitBlt(0,0,rcClient.Width(),rcClient.Height(),&MemDC,0,0,SRCCOPY);
//DEL 	MemDC.SelectObject(pOldBitmap);
//DEL 	MemDC.DeleteDC();
//DEL 	return TRUE;// TODO: Add your message handler code here and/or call default
//DEL 	
//DEL 	//return CView::OnEraseBkgnd(pDC);
//DEL }
