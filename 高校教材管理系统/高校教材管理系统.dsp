# Microsoft Developer Studio Project File - Name="高校教材管理系统" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=高校教材管理系统 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "高校教材管理系统.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "高校教材管理系统.mak" CFG="高校教材管理系统 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "高校教材管理系统 - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "高校教材管理系统 - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "高校教材管理系统 - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "高校教材管理系统 - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "高校教材管理系统 - Win32 Release"
# Name "高校教材管理系统 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\_recordset.cpp
# End Source File
# Begin Source File

SOURCE=.\ADOConn.cpp
# End Source File
# Begin Source File

SOURCE=.\adodc.cpp
# End Source File
# Begin Source File

SOURCE=.\BanjifuzerenguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\BenxueqisuoxujiaocaiDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ChakansuoyoujiaocaiDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ChubansheguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ChuhuocaiwuguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\DengluDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\FenleixuanzeyudingDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\font.cpp
# End Source File
# Begin Source File

SOURCE=.\GenjujiaocaihaoDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\GenjujiaocaimingDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\GongyingshangguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\JiaocaichukuDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\JiaocaijibenxinxiDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\JiaocaijinhuoDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\JiaocaituidingDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\JinhuocaiwuguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\KucunguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\KuweiguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\LianxiguanliyuanDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\NianfencaiwuguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\Users.cpp
# End Source File
# Begin Source File

SOURCE=.\XiugaigerenxinxiDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\XiugaiguanliyuanmimaDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\XiugaiyonghujibenxinxiDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\YinglizongbiaoDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\YonghugenggaimimaDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\YonghugerenguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\YonghuxiaoxiDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\YuefencaiwuguanliDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ZhucebanjifuzerenDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ZhucechubansheDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ZhuceDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ZhucegongyingshangDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ZhuceguanliyuanDlg.cpp
# End Source File
# Begin Source File

SOURCE=".\高校教材管理系统.cpp"
# End Source File
# Begin Source File

SOURCE=".\高校教材管理系统.odl"
# End Source File
# Begin Source File

SOURCE=".\高校教材管理系统.rc"
# End Source File
# Begin Source File

SOURCE=".\高校教材管理系统Doc.cpp"
# End Source File
# Begin Source File

SOURCE=".\高校教材管理系统View.cpp"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\_recordset.h
# End Source File
# Begin Source File

SOURCE=.\ADOConn.h
# End Source File
# Begin Source File

SOURCE=.\adodc.h
# End Source File
# Begin Source File

SOURCE=.\BanjifuzerenguanliDlg.h
# End Source File
# Begin Source File

SOURCE="..\..\..\..\..\Program Files\Microsoft Visual Studio\VC98\Include\BASETSD.H"
# End Source File
# Begin Source File

SOURCE=.\BenxueqisuoxujiaocaiDlg.h
# End Source File
# Begin Source File

SOURCE=.\ChakansuoyoujiaocaiDlg.h
# End Source File
# Begin Source File

SOURCE=.\ChubansheguanliDlg.h
# End Source File
# Begin Source File

SOURCE=.\ChuhuocaiwuguanliDlg.h
# End Source File
# Begin Source File

SOURCE=.\DengluDlg.h
# End Source File
# Begin Source File

SOURCE=.\FenleixuanzeyudingDlg.h
# End Source File
# Begin Source File

SOURCE=.\font.h
# End Source File
# Begin Source File

SOURCE=.\GenjujiaocaihaoDlg.h
# End Source File
# Begin Source File

SOURCE=.\GenjujiaocaimingDlg.h
# End Source File
# Begin Source File

SOURCE=.\GongyingshangguanliDlg.h
# End Source File
# Begin Source File

SOURCE=.\JiaocaichukuDlg.h
# End Source File
# Begin Source File

SOURCE=.\JiaocaijibenxinxiDlg.h
# End Source File
# Begin Source File

SOURCE=.\JiaocaijinhuoDlg.h
# End Source File
# Begin Source File

SOURCE=.\JiaocaituidingDlg.h
# End Source File
# Begin Source File

SOURCE=.\JinhuocaiwuguanliDlg.h
# End Source File
# Begin Source File

SOURCE=.\KucunguanliDlg.h
# End Source File
# Begin Source File

SOURCE=.\KuweiguanliDlg.h
# End Source File
# Begin Source File

SOURCE=.\LianxiguanliyuanDlg.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\NianfencaiwuguanliDlg.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\Users.h
# End Source File
# Begin Source File

SOURCE=.\XiugaigerenxinxiDlg.h
# End Source File
# Begin Source File

SOURCE=.\XiugaiguanliyuanmimaDlg.h
# End Source File
# Begin Source File

SOURCE=.\XiugaiyonghujibenxinxiDlg.h
# End Source File
# Begin Source File

SOURCE=.\YinglizongbiaoDlg.h
# End Source File
# Begin Source File

SOURCE=.\YonghugenggaimimaDlg.h
# End Source File
# Begin Source File

SOURCE=.\YonghugerenguanliDlg.h
# End Source File
# Begin Source File

SOURCE=.\YonghuxiaoxiDlg.h
# End Source File
# Begin Source File

SOURCE=.\YuefencaiwuguanliDlg.h
# End Source File
# Begin Source File

SOURCE=.\ZhucebanjifuzerenDlg.h
# End Source File
# Begin Source File

SOURCE=.\ZhucechubansheDlg.h
# End Source File
# Begin Source File

SOURCE=.\ZhuceDlg.h
# End Source File
# Begin Source File

SOURCE=.\ZhucegongyingshangDlg.h
# End Source File
# Begin Source File

SOURCE=.\ZhuceguanliyuanDlg.h
# End Source File
# Begin Source File

SOURCE=".\高校教材管理系统.h"
# End Source File
# Begin Source File

SOURCE=".\高校教材管理系统Doc.h"
# End Source File
# Begin Source File

SOURCE=".\高校教材管理系统View.h"
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\bmp\1.bmp
# End Source File
# Begin Source File

SOURCE=.\ico\1.ico
# End Source File
# Begin Source File

SOURCE=.\bmp\2.bmp
# End Source File
# Begin Source File

SOURCE=.\bmp\3.bmp
# End Source File
# Begin Source File

SOURCE=.\bmp\4.bmp
# End Source File
# Begin Source File

SOURCE=.\bmp\5.bmp
# End Source File
# Begin Source File

SOURCE=.\bmp\6.bmp
# End Source File
# Begin Source File

SOURCE=.\bmp\7.bmp
# End Source File
# Begin Source File

SOURCE=".\res\高校教材管理系统.ico"
# End Source File
# Begin Source File

SOURCE=".\res\高校教材管理系统.rc2"
# End Source File
# Begin Source File

SOURCE=".\res\高校教材管理系统Doc.ico"
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# Begin Source File

SOURCE=".\高校教材管理系统.reg"
# End Source File
# End Target
# End Project
