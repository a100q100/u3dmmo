#include "RDConsoleWindowCL.h"
#include "../StackWalker/StackWalker.h"
#include "../share/interface.h"

RDConsoleWindowCL * RDConsoleWindowCL::g_colsole = NULL ;

RDConsoleWindowCL * RDGetConsoleWindow()
{
	if(RDConsoleWindowCL::g_colsole == NULL)
		RDConsoleWindowCL::g_colsole = &RDConsoleWindowCL::GetInstance() ;

	return RDConsoleWindowCL::g_colsole ;
}

void RDSetConsoleWindow(void * console_)
{
    RDConsoleWindowCL::g_colsole = (RDConsoleWindowCL *)console_ ;
}

RDConsoleWindowCL::RDConsoleWindowCL(void)
:m_hCon(NULL)
{
}

RDConsoleWindowCL::~RDConsoleWindowCL(void)
{
}

RDConsoleWindowCL & RDConsoleWindowCL::GetInstance()
{
     static RDConsoleWindowCL instance ;
	 return instance ;
}

void RDConsoleWindowCL::Open(const char * title_)
{
	if(m_hCon == NULL)
	{
	    AllocConsole();
	    m_hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		 SetConsoleTitle(title_);
	}
}

void RDConsoleWindowCL::Close()
{
    if(m_hCon != NULL)
	{
        FreeConsole();
        m_hCon = NULL;
	}
}

void RDConsoleWindowCL::OutputStr(const char * str_)
{
    if(m_hCon != NULL)
	{
		DWORD dwWritten=0;
		WriteConsole(m_hCon,str_,strlen(str_),&dwWritten,NULL) ;
	}
}


void RDConsoleWindowCL::OutputLine(const char* formatStr_ , ...) 
{
	char szMsg[1024];
	va_list ap;
	va_start( ap, formatStr_ );
	szMsg[_vsnprintf(szMsg,sizeof(szMsg)-1,formatStr_,ap)] = 0;
	va_end  ( ap );
	int len = (int)strlen(szMsg) ;
	szMsg[len] = '\n' ;
	szMsg[len + 1] = '\0' ;
	OutputStr(szMsg);
}

bool GMwAssertionHandler(	const char* pcExpression,
						 const char* pcUserMessage,
						 const char* pcFile,
						 const char* pcFunction,
						 const int iLine)
{
	MyStackWalker sw; 
	sw.ShowCallstack();
	/*
	string assertDescription;
	assertDescription.Format(
		"���ʽ: %s\n\n"
		"˵��: %s\n\n"
		"�ļ�: %s\n"
		"�к�: %d\n"
		"����: %s\n"
		"��ջ: \n"
		"%s\n",
		pcExpression,
		pcUserMessage,
		pcFile,
		iLine,
		pcFunction,
		sw.GetContent());
	*/
	CORE("���ش����뱨�����","���ʽ: %s",pcExpression);
	CORE("���ش���","˵��: %s",pcUserMessage);
	CORE("���ش���","�ļ�: %s",pcFile);
	CORE("���ش���","�к�: %d",iLine);
	CORE("���ش���","����: %s",pcFunction);
	CORE("���ش���","��ջ:");//��ջ����̫��COREҪ���ˣ�ֻ����д

	for (int i=0;i<(int)sw.m_oStackStrList.size();i++)
	{
		CORE("��ջ","%s",sw.m_oStackStrList[i].c_str());
	}
	
#ifdef GAME_SERVER
	//printf("%s",sw.GetContent().c_str());
#endif
	/*
	char* pcCaption = "����";
	int iButtonResult = MessageBox(GMainHWND, buffer, pcCaption, MB_YESNO);


	switch(iButtonResult)
	{
	case IDYES:
		break;
	case IDNO:
		__asm int 3; 
		break;
	}
	*/

	return true;
}