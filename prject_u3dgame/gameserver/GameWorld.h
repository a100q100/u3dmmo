#ifndef __GAME_WORLD_SERVER_H__
#define __GAME_WORLD_SERVER_H__
#include "alldef.h"
#include "Singleton.h"
#include "g_tcplistener.h"
#include "s_cmdchannel.h"
#include "User.h"
class TiXmlElement;
class CUser;

struct SNetLink 
{
public:
	SNetLink()
	{
		valid = true;//�Ƿ���Ч
		connectTime =0;//����ʱ��
		id=0;//id
		code =0;
		session = NULL;//�Ự����
		strIp[0]='\0';
	};
	bool   valid;//�Ƿ���Ч
	ULONG  connectTime;//����ʱ��
	ULONG  id;//id
	string username;//�û���
	string pwd;//����
	char   code;
	char strIp[128];
	CG_TCPSession *session;//�Ự����

};

class CGameWorld
{
public:
	CGameWorld();
	~CGameWorld();
public:
	bool init();
	void run();
	void releaseAll();

	//config
public:
	bool initConfig(TiXmlElement* pRoot);
private:
	ULONG m_iTime;
	ULONG m_iOldTime;
	ULONG m_iSyncTime;

	//load data
public:
	bool initData();

	//db
public:
	bool initDB(TiXmlElement* pRoot);


	//net
public:
	bool initNet(TiXmlElement* pRoot);
	void releaseNet();
	void InitChannel();

	void process();
	void processListener();
	void processLink();
	void processUser();

public:
	SNetLink		*m_activeLink;				//��ǰ���������LINK()
	CG_CmdPacket	*m_activeCmd;				//��ǰ����������
	CUser			*m_cmdGiver;

private:
	string m_strListenIp;
	int m_iListenPort;
	CG_TCPListener m_ClientListener;
	list<SNetLink*>		  m_unloginLink;// unlogin user

	CS_CmdChannel       m_channelUnlogin;
	CS_CmdChannel		m_channelLogin;

	//user data
public:
	bool initUserData();
	void releaseUserData();
	void addUser(CUser* pUser);
	void deleteUser(long iUserId);
	CUser* getUser(long iUserId);
private:
	map<long,CUser*> m_oUsers;

	//logic
public:
	long createId();
	char LoginIn(SNetLink* pLink,const char* strAccout,const char* strPwd);
	void sendAllUser(CG_CmdPacket *Cmd);
};

CGameWorld* GetApp();
#define LINK()		 GetApp()->m_activeLink
#define CMD()		 GetApp()->m_activeCmd 
#define GIVER()		 GetApp()->m_cmdGiver
#endif//__GAME_WORLD_SERVER_H__
