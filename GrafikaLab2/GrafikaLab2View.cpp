
// GrafikaLab2View.cpp : implementation of the CGrafikaLab2View class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "GrafikaLab2.h"
#endif

#include "GrafikaLab2Doc.h"
#include "GrafikaLab2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGrafikaLab2View

IMPLEMENT_DYNCREATE(CGrafikaLab2View, CView)

BEGIN_MESSAGE_MAP(CGrafikaLab2View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CGrafikaLab2View construction/destruction

CGrafikaLab2View::CGrafikaLab2View() noexcept
{
	// TODO: add construction code here

}

CGrafikaLab2View::~CGrafikaLab2View()
{
}

BOOL CGrafikaLab2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CGrafikaLab2View drawing

void CGrafikaLab2View::OnDraw(CDC* /*pDC*/)
{
	CGrafikaLab2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CGrafikaLab2View printing

BOOL CGrafikaLab2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CGrafikaLab2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CGrafikaLab2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CGrafikaLab2View diagnostics

#ifdef _DEBUG
void CGrafikaLab2View::AssertValid() const
{
	CView::AssertValid();
}

void CGrafikaLab2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGrafikaLab2Doc* CGrafikaLab2View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGrafikaLab2Doc)));
	return (CGrafikaLab2Doc*)m_pDocument;
}
#endif //_DEBUG


// CGrafikaLab2View message handlers
