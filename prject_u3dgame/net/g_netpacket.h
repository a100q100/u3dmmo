/*
g_NetPacket.h: interface for the CG_NetPacket class.
*/

#ifndef __CG_NET_PACKET_H__
#define __CG_NET_PACKET_H__

#include "g_cmdpacket.h"

const int NET_PACKET_HEAD_SIZE		 = 5;
const int NET_PACKET_ENCRYPT_OFFSET  = 3;
const int MAX_NET_PACKET_SIZE  = MAX_CMD_PACKET_SIZE + NET_PACKET_HEAD_SIZE; 

/*
net packet head struct
{
	3  bit	010
	1  bit  udp
    1  bit  reliable
	1  bit  system 
	1  bit	compress 
	1  bit	encrypt
	16 bit  data size
	16 bit  seq
}
*/

const int  PROTOCAL_FLAG_OFFSET = 5;
const char PROTOCOL_FLAG		= 2; // 010
const char FLAG_ENCRYPT			= 1;
const char FLAG_COMPRESS		= 2;
const char FLAG_SYSTEM			= 4;
const char FLAG_RELIABLE		= 8;
const char FLAG_UDP				= 16;

/* system net packet type define */
const short SYS_PACKET_SET_SEED   = 1;
const short SYS_PACKET_KEEP_ALIVE = 2;
const short SYS_PACKET_ALIVE_ACK  = 3;

const unsigned short MAX_NET_PACKET_SEQ = 65000;
const int COMPRESS_BUF_SIZE = MAX_NET_PACKET_SIZE*3/2;


const bool IS_OPEN_COMPRESS = false;//�Ƿ���ѹ��
const bool IS_OPEN_ENCODE = false;//�Ƿ�������
class CG_NetPacket  
{
public:
	CG_NetPacket();
	virtual ~CG_NetPacket();

	bool Uncompress();
	bool Compress();
	bool IsCompress();
	bool IsEncrypt();
	bool IsSysPacket();
	void SetSysPacket();
	void Decrypt(char *seed,int len);
	void Encrypt(char *seed,int len);
	void AddCmdPacket(CG_CmdPacket *packet);
	void AttachCmdPacket(CG_CmdPacket *packet);
	void SetSeq(unsigned short seq) { *m_pktSeq = seq; }

	int  BeginRead(char *p,int len);
	int  GetSeq()		{ return *m_pktSeq; }
	int  GetHeadSize()  { return NET_PACKET_HEAD_SIZE; }
	int  GetTotalSize() { return m_totalSize; }
	char *GetBuffer()	{ return m_buffer; }

	char			 m_buffer[MAX_NET_PACKET_SIZE];
	int				 m_totalSize;
	char			*m_pktFlag;
	unsigned short  *m_pktSeq;
	unsigned short  *m_pktDataSize;
	char			 m_comBuf[COMPRESS_BUF_SIZE];
};

#endif

