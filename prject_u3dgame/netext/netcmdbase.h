#pragma once
#include "../net/g_cmdpacket.h"
class CG_CmdPacket;
class GC_Session_Bind;

/*
*CNetCmdBase����ӵ��һ���麯������Ȼ��������ָ��ƫ��
*CLoginLogic* pl = new CLoginLogic();
*CNetCmdBase* test = pl;
*����pl!=test !!!!ԭ��δ֪,���Լ���getTag
*/
class CNetCmdBase
{
public:
	virtual int getTag(){return m_iTag;};
	//CNetCmdBase(void);
	//~CNetCmdBase(void);
	//bool net_fun(short cmdID, CG_CmdPacket *pPacket)=0;
protected:
	int m_iTag;
};


typedef bool (CNetCmdBase::*NETCMD_FUN_OBJ)(short cmdID, CG_CmdPacket *pPacket);
#define NETCMD_FUN_OBJ_Selector(_select) (NETCMD_FUN_OBJ)(&_select)


//�������ӻص�����
typedef bool (CNetCmdBase::*CBF_OnConnect)(GC_Session_Bind *pSession,bool bRt);
#define CBF_OnConnect_Selector(_select) (CBF_OnConnect)(&_select)

typedef bool (CNetCmdBase::*CBF_OnDisConnect)(GC_Session_Bind *pSession);
#define CBF_OnDisConnect_Selector(_select) (CBF_OnDisConnect)(&_select)

typedef bool (CNetCmdBase::*CBF_OnNetClose)(GC_Session_Bind *pSession,bool bRt);
#define CBF_OnNetClose_Selector(_select) (CBF_OnNetClose)(&_select)