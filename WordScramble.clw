; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CWordScrambleDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "WordScramble.h"

ClassCount=4
Class1=CWordScrambleApp
Class2=CWordScrambleDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_DIALOG_HELP
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Resource4=IDD_WORDSCRAMBLE_DIALOG
Class4=CHelpDlg
Resource5=IDR_MAIN_MENU

[CLS:CWordScrambleApp]
Type=0
HeaderFile=WordScramble.h
ImplementationFile=WordScramble.cpp
Filter=N

[CLS:CWordScrambleDlg]
Type=0
HeaderFile=WordScrambleDlg.h
ImplementationFile=WordScrambleDlg.cpp
Filter=D
LastObject=ID_FILE_OPENWORDLIST
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=WordScrambleDlg.h
ImplementationFile=WordScrambleDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=7
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352

[DLG:IDD_WORDSCRAMBLE_DIALOG]
Type=1
Class=CWordScrambleDlg
ControlCount=23
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC_STRING1,static,1342308352
Control4=IDC_STATIC_STRING2,static,1342308352
Control5=IDC_STATIC_STRING3,static,1342308352
Control6=IDC_STATIC_STRING4,static,1342308352
Control7=IDC_STATIC_STRING5,static,1342308352
Control8=IDC_STATIC_STRING8,static,1342308352
Control9=IDC_STATIC_STRING7,static,1342308352
Control10=IDC_STATIC_STRING6,static,1342308352
Control11=IDC_STATIC_STRING9,static,1342308352
Control12=IDC_STATIC_STRING10,static,1342308352
Control13=IDC_STATIC,button,1342177287
Control14=IDC_EDIT_STRING1,edit,1350631552
Control15=IDC_EDIT_STRING2,edit,1350631552
Control16=IDC_EDIT_STRING3,edit,1350631552
Control17=IDC_EDIT__STRING4,edit,1350631552
Control18=IDC_EDIT_STRING5,edit,1350631552
Control19=IDC_EDIT_STRING6,edit,1350631552
Control20=IDC_EDIT__STRING7,edit,1350631552
Control21=IDC_EDIT__STRING8,edit,1350631552
Control22=IDC_EDIT__STRING9,edit,1350631552
Control23=IDC_EDIT__STRING10,edit,1350631552

[MNU:IDR_MAIN_MENU]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_EXIT
Command3=ID_FILE_OPENWORDLIST
Command4=ID_EDIT_UPPERCASE
Command5=ID_EDIT_LOWERCASE
Command6=ID_EDIT_KEEPLASTLETTERS
Command7=ID_HELP_ABOUTWORDSCRABLE
Command8=ID_HELP_HOWTOPLAY
CommandCount=8

[DLG:IDD_DIALOG_HELP]
Type=1
Class=CHelpDlg
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDC_EDIT_STRING,edit,1352730628

[CLS:CHelpDlg]
Type=0
HeaderFile=HelpDlg.h
ImplementationFile=HelpDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CHelpDlg

