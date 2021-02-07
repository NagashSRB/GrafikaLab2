
// GrafikaLab2View.h : interface of the CGrafikaLab2View class
//

#pragma once


class CGrafikaLab2View : public CView
{
protected: // create from serialization only
	CGrafikaLab2View() noexcept;
	DECLARE_DYNCREATE(CGrafikaLab2View)

// Attributes
public:
	CGrafikaLab2Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CGrafikaLab2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in GrafikaLab2View.cpp
inline CGrafikaLab2Doc* CGrafikaLab2View::GetDocument() const
   { return reinterpret_cast<CGrafikaLab2Doc*>(m_pDocument); }
#endif

