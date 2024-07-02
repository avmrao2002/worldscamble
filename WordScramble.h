// WordScramble.h : main header file for the WORDSCRAMBLE application
//

#if !defined(AFX_WORDSCRAMBLE_H__922A5BD6_5A2F_4DA1_8EE8_94D153732607__INCLUDED_)
#define AFX_WORDSCRAMBLE_H__922A5BD6_5A2F_4DA1_8EE8_94D153732607__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CWordScrambleApp:
// See WordScramble.cpp for the implementation of this class
//

class CWordScrambleApp : public CWinApp
{
public:
	CWordScrambleApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWordScrambleApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CWordScrambleApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WORDSCRAMBLE_H__922A5BD6_5A2F_4DA1_8EE8_94D153732607__INCLUDED_)
