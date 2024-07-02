// WordScrambleDlg.cpp : implementation file
//

#include "stdafx.h"
#include "WordScramble.h"
#include "WordScrambleDlg.h"
#include "Dictionary.h"
#include "HelpDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
void getRandom(int num,int arr[100]);
/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About
void writeMessage(char *str,...)
{
	char arr[9999];
	va_list va;     
    va_start(va,str);
    vsprintf(arr,str,va);       
	FILE* fp=fopen(".\\data.dat","a+");
	fprintf(fp,"%s\n",arr);
	fclose(fp);
}
class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWordScrambleDlg dialog

CWordScrambleDlg::CWordScrambleDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CWordScrambleDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CWordScrambleDlg)
	m_edit_string10 = _T("");
	m_edit_string4 = _T("");
	m_edit_string7 = _T("");
	m_edit_string8 = _T("");
	m_edit_string9 = _T("");
	m_edit_string1 = _T("");
	m_edit_string2 = _T("");
	m_edit_string3 = _T("");
	m_edit_string5 = _T("");
	m_edit_string6 = _T("");
	m_static_string1 = _T("");
	m_static_string10 = _T("");
	m_static_string2 = _T("");
	m_static_string3 = _T("");
	m_static_string4 = _T("");
	m_static_string5 = _T("");
	m_static_string6 = _T("");
	m_static_string7 = _T("");
	m_static_string8 = _T("");
	m_static_string9 = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_upperCaseFlag =  FALSE;
}

void CWordScrambleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CWordScrambleDlg)
	DDX_Text(pDX, IDC_EDIT__STRING10, m_edit_string10);
	DDX_Text(pDX, IDC_EDIT__STRING4, m_edit_string4);
	DDX_Text(pDX, IDC_EDIT__STRING7, m_edit_string7);
	DDX_Text(pDX, IDC_EDIT__STRING8, m_edit_string8);
	DDX_Text(pDX, IDC_EDIT__STRING9, m_edit_string9);
	DDX_Text(pDX, IDC_EDIT_STRING1, m_edit_string1);
	DDX_Text(pDX, IDC_EDIT_STRING2, m_edit_string2);
	DDX_Text(pDX, IDC_EDIT_STRING3, m_edit_string3);
	DDX_Text(pDX, IDC_EDIT_STRING5, m_edit_string5);
	DDX_Text(pDX, IDC_EDIT_STRING6, m_edit_string6);
	DDX_Text(pDX, IDC_STATIC_STRING1, m_static_string1);
	DDX_Text(pDX, IDC_STATIC_STRING10, m_static_string10);
	DDX_Text(pDX, IDC_STATIC_STRING2, m_static_string2);
	DDX_Text(pDX, IDC_STATIC_STRING3, m_static_string3);
	DDX_Text(pDX, IDC_STATIC_STRING4, m_static_string4);
	DDX_Text(pDX, IDC_STATIC_STRING5, m_static_string5);
	DDX_Text(pDX, IDC_STATIC_STRING6, m_static_string6);
	DDX_Text(pDX, IDC_STATIC_STRING7, m_static_string7);
	DDX_Text(pDX, IDC_STATIC_STRING8, m_static_string8);
	DDX_Text(pDX, IDC_STATIC_STRING9, m_static_string9);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CWordScrambleDlg, CDialog)
	//{{AFX_MSG_MAP(CWordScrambleDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_FILE_EXIT, OnFileExit)
	ON_COMMAND(ID_FILE_NEW, OnFileNew)
	ON_COMMAND(ID_HELP_ABOUTWORDSCRABLE, OnHelpAboutwordscrable)
	ON_COMMAND(ID_HELP_HOWTOPLAY, OnHelpHowtoplay)
	ON_COMMAND(ID_EDIT_LOWERCASE, OnEditLowercase)
	ON_UPDATE_COMMAND_UI(ID_EDIT_LOWERCASE, OnUpdateEditLowercase)
	ON_COMMAND(ID_EDIT_UPPERCASE, OnEditUppercase)
	ON_UPDATE_COMMAND_UI(ID_EDIT_UPPERCASE, OnUpdateEditUppercase)
	ON_COMMAND(ID_EDIT_KEEPLASTLETTERS, OnEditKeeplastletters)
	ON_UPDATE_COMMAND_UI(ID_EDIT_KEEPLASTLETTERS, OnUpdateEditKeeplastletters)
	ON_COMMAND(ID_FILE_OPENWORDLIST, OnFileOpenwordlist)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWordScrambleDlg message handlers

BOOL CWordScrambleDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	CMenu menu;
	menu.LoadMenu (IDR_MAIN_MENU);
	SetMenu(&menu);
	Initialize();
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}
void CWordScrambleDlg::Initialize()
{
	int size = sizeof(Dictionary)/100;
	int arr[MAXDICTIONARY];
	getRandom(MAXDICTIONARY,arr);	 
	int index=0;
	SetString(m_static_string1,index,arr[index]);
	index++;
	SetString(m_static_string2,index,arr[index]);
	index++;
	SetString(m_static_string3,index,arr[index]);
	index++;
	SetString(m_static_string4,index,arr[index]);
	index++;
	SetString(m_static_string5,index,arr[index]);
	index++;
	SetString(m_static_string6,index,arr[index]);
	index++;
	SetString(m_static_string7,index,arr[index]);
	index++;
	SetString(m_static_string8,index,arr[index]);
	index++;
	SetString(m_static_string9,index,arr[index]);
	index++;
	SetString(m_static_string10,index,arr[index]);	 
	m_edit_string10 = _T("");
	m_edit_string4 = _T("");
	m_edit_string7 = _T("");
	m_edit_string8 = _T("");
	m_edit_string9 = _T("");
	m_edit_string1 = _T("");
	m_edit_string2 = _T("");
	m_edit_string3 = _T("");
	m_edit_string5 = _T("");
	m_edit_string6 = _T("");

	UpdateData(FALSE);
	/*CString str;
	str.Format("%d",size);
	AfxMessageBox(str);*/

}
void CWordScrambleDlg::SetString(CString &str, int index,int arrindex)
{
	int arr1[100];
	getRandom(strlen(Dictionary[arrindex]),arr1);
	str = "";
	for(int i=0;i<strlen(Dictionary[arrindex]);i++)
	{
		str += Dictionary[arrindex][arr1[i]-1];
	}
	m_Strings[index] = Dictionary[arrindex];
	//writeMessage("%s",m_Strings[index]);
}
void CWordScrambleDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.
int checkExisting(int n, int *arr, int rand)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i] == rand)
			return 1;
	}
	return 0;
}

int getExisting(int n,int* arr, int* data)
{	 
	int foundFlag = 0; 	 	 
	for(int i=0;i<n;i++)
	{		 
		if(data[i] == 0) continue;
 		for(int j =0;j<n;j++)
		{
 			if(arr[j]==0)
			{
			 			 
				return data[i];
			}
				
			if(arr[j] == data[i])
			{				 
				foundFlag = 1;
				break;
			}
		}
		if(foundFlag == 0)
		{	 			 
			return data[i];
		}
	}
 	return -1;
}
void getRandom(int num,int arr[100])
{
	int i=0;
	srand( (unsigned)time( NULL ) );
	int data[100];
	for(i=0;i<100;i++)
	{
		data[i] = i+1;
	}

	for(i=0;i<100;i++)
	{
		arr[i]=0;
	}
	int trycount = 0;
	for(i=0;i<num;i++)
	{
			 
			int rnd = (rand() % ((num)+1));
 			if( rnd == 0 || checkExisting(num,arr,rnd) == 1)
			{//try once again
				if(trycount==1000)
				{
					int retdata = getExisting(num,arr,data);
					if(retdata < 0)
					{
						return;
					}
					else
					{
						trycount = 0;
						arr[i] = retdata;
					}
				}
				else
				{
					trycount++;
					i--;
				}
				 
			}
			else
			{
				trycount=0;
				arr[i] = rnd;
			}
	} 
}


void CWordScrambleDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CWordScrambleDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CWordScrambleDlg::OnOK() 
{
	// TODO: Add extra validation here
 	bool flag = true;
	UpdateData(TRUE);
	if(m_edit_string1 != m_Strings[0])
	{
		m_edit_string1 = m_Strings[0];
		m_edit_string1.MakeUpper();
		flag = false;
	}
	if(m_edit_string2 != m_Strings[1])
	{
		m_edit_string2 = m_Strings[1];
		m_edit_string2.MakeUpper();
		flag = false;
	}
	if(m_edit_string3 != m_Strings[2])
	{
		m_edit_string3 = m_Strings[2];
		m_edit_string3.MakeUpper();
		flag = false;
	}
	if(m_edit_string4 != m_Strings[3])
	{
		m_edit_string4 = m_Strings[3];
		m_edit_string4.MakeUpper();
		flag = false;
	}
	if(m_edit_string5 != m_Strings[4])
	{
		m_edit_string5 = m_Strings[4];
		m_edit_string5.MakeUpper();
		flag = false;
	}
	if(m_edit_string6 != m_Strings[5])
	{
		m_edit_string6 = m_Strings[5];
		m_edit_string6.MakeUpper();
		flag = false;
	}
	if(m_edit_string7 != m_Strings[6])
	{
		m_edit_string7 = m_Strings[6];
		m_edit_string7.MakeUpper();
		flag = false;
	}
	if(m_edit_string8 != m_Strings[7])
	{
		m_edit_string8 = m_Strings[7];
		m_edit_string8.MakeUpper();
		flag = false;
	}
	if(m_edit_string9 != m_Strings[8])
	{
		m_edit_string9 = m_Strings[8];
		m_edit_string9.MakeUpper();
		flag = false;
	}
	if(m_edit_string10 != m_Strings[9])
	{
		m_edit_string10 = m_Strings[9];
		m_edit_string10.MakeUpper();
		flag = false;
	}
	UpdateData(FALSE);
	if(flag == true)
	{
		AfxMessageBox("Congratulations!!! You made it");
	}
	else
	{
		AfxMessageBox("Sorry!!! Try once again");
	}
	  
}

void CWordScrambleDlg::OnFileExit() 
{
	// TODO: Add your command handler code here
	EndDialog(FALSE);
}

void CWordScrambleDlg::OnFileNew() 
{
	// TODO: Add your command handler code here
	Initialize();
	
}

void CWordScrambleDlg::OnHelpAboutwordscrable() 
{
	// TODO: Add your command handler code here
	CAboutDlg dlg;
	dlg.DoModal();
}

void CWordScrambleDlg::OnHelpHowtoplay() 
{
	// TODO: Add your command handler code here
	CHelpDlg dlg;
	dlg.DoModal();
}

void CWordScrambleDlg::OnEditLowercase() 
{
	// TODO: Add your command handler code here
	m_upperCaseFlag = FALSE;
}

void CWordScrambleDlg::OnUpdateEditLowercase(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	m_upperCaseFlag == TRUE ? pCmdUI->SetCheck(0) :pCmdUI->SetCheck(1);
}

void CWordScrambleDlg::OnEditUppercase() 
{
	// TODO: Add your command handler code here
	m_upperCaseFlag = TRUE;	
}

void CWordScrambleDlg::OnUpdateEditUppercase(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	m_upperCaseFlag == TRUE ? pCmdUI->SetCheck(1) :pCmdUI->SetCheck(0);			
}

void CWordScrambleDlg::OnEditKeeplastletters() 
{
	// TODO: Add your command handler code here
	
}

void CWordScrambleDlg::OnUpdateEditKeeplastletters(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	
}

void CWordScrambleDlg::OnFileOpenwordlist() 
{
	// TODO: Add your command handler code here
	
}
