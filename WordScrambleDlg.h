// WordScrambleDlg.h : header file
//

#if !defined(AFX_WORDSCRAMBLEDLG_H__E927C7C0_3C9A_4F38_A4F3_C8A7C7785C42__INCLUDED_)
#define AFX_WORDSCRAMBLEDLG_H__E927C7C0_3C9A_4F38_A4F3_C8A7C7785C42__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CWordScrambleDlg dialog

class CWordScrambleDlg : public CDialog
{
// Construction
public:
	CWordScrambleDlg(CWnd* pParent = NULL);	// standard constructor
	void Initialize();
	void SetString(CString &str, int,int index);
	CString m_Strings[10];
	int m_upperCaseFlag;
// Dialog Data
	//{{AFX_DATA(CWordScrambleDlg)
	enum { IDD = IDD_WORDSCRAMBLE_DIALOG };
	CString	m_edit_string10;
	CString	m_edit_string4;
	CString	m_edit_string7;
	CString	m_edit_string8;
	CString	m_edit_string9;
	CString	m_edit_string1;
	CString	m_edit_string2;
	CString	m_edit_string3;
	CString	m_edit_string5;
	CString	m_edit_string6;
	CString	m_static_string1;
	CString	m_static_string10;
	CString	m_static_string2;
	CString	m_static_string3;
	CString	m_static_string4;
	CString	m_static_string5;
	CString	m_static_string6;
	CString	m_static_string7;
	CString	m_static_string8;
	CString	m_static_string9;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWordScrambleDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWordScrambleDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	afx_msg void OnFileExit();
	afx_msg void OnFileNew();
	afx_msg void OnHelpAboutwordscrable();
	afx_msg void OnHelpHowtoplay();
	afx_msg void OnEditLowercase();
	afx_msg void OnUpdateEditLowercase(CCmdUI* pCmdUI);
	afx_msg void OnEditUppercase();
	afx_msg void OnUpdateEditUppercase(CCmdUI* pCmdUI);
	afx_msg void OnEditKeeplastletters();
	afx_msg void OnUpdateEditKeeplastletters(CCmdUI* pCmdUI);
	afx_msg void OnFileOpenwordlist();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WORDSCRAMBLEDLG_H__E927C7C0_3C9A_4F38_A4F3_C8A7C7785C42__INCLUDED_)
