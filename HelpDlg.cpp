// HelpDlg.cpp : implementation file
//

#include "stdafx.h"
#include "WordScramble.h"
#include "HelpDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHelpDlg dialog


CHelpDlg::CHelpDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CHelpDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CHelpDlg)
	m_edit_string = _T("");
	//}}AFX_DATA_INIT
}


void CHelpDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CHelpDlg)
	DDX_Text(pDX, IDC_EDIT_STRING, m_edit_string);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CHelpDlg, CDialog)
	//{{AFX_MSG_MAP(CHelpDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHelpDlg message handlers

BOOL CHelpDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	m_edit_string = "This is a word scramble game with around 3500 words."
		"This game consists of randomly selected 10 scramble words from dictionary " 
		"which are placed in left side, leaving the right side edit boxes free. "
		"Unscramble the words and fill in right side edit boxes. After completion, "
		"click on Check to check your answers are correct or not. On clicking on File->New "
		"new game will be started."
		"\r\n\r\nNo warranty or guaranty is provided with this software, this is a freeware game.\r\n\r\n"
		"Send your comments to raoavm@yahoo.com\r\n\r\n"
		"Visit at http://www.geocities.com/raoavm/index.html";		 
	UpdateData(FALSE);
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
