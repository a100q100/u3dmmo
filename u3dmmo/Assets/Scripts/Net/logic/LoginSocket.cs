using System;
using UnityEngine;

using System.Collections.Generic;

namespace AssemblyCSharp
{	
	public class LoginSocket : Socket
	{		

		// private PacketHandler PH = null; will handel those msg due to the pack id given.
		public LoginSocket()
		{

		}

        public LoginSocket(string address, int port):base(address,port)
		{		
		}

        public void addChar(int cid)
        {
        }

        // pack for 3K, for 100 clients's sending. server will broad cast this test login msg. 
        public void SendContens()
        {
            WorldPack pack = new WorldPack(Opcodes.MSG_GM_SUMMON, 3096);
            for (int i = 0; i < 100; i++) { pack.W("���˴Ӻ�Զ��Զ�ĵط����Ե��� connect()��������Ļ����ϵ�ĳ���˿ڣ���Ȼ�����Ѿ��� listen()��"); }
        }

        // �ͻ��˵�½������
        // ����֤���˺Ųſ��Խ���������Ϸ���ݲ�����  
        // ����֤���˺Ųſ���ѡ���ɫ��½�� 
        // ��֤֮�󽫷���SMSG_AUTH_RESPONSE
        public void c_Login(string acc, string pwd)
        {
            WorldPack pack = new WorldPack(Opcodes.CMSG_AUTH_SESSION, (ushort)(acc.Length + pwd.Length + 4));
            pack.W(acc);
            pack.W(pwd);
            OutPacket(pack);
        }

        // �ǳ�������
        // ����֤���˺Ųſ��Խ���������Ϸ���ݲ�����  
        // ����֤���˺Ųſ���ѡ���ɫ��½��  
        public void c_Logoff()
        {
            // do no thig
        }

        /// <summary>
        /// ��ǰ�������֤״̬,����Է����ɫ������Ϸ����.����ɹ�,���᷵�س�ʼ������.
        /// ���򷵻� SMSG_CHARACTER_LOGIN_FAILED
        /// </summary>
        /// <param name="charID"></param>
        public void c_Logon(UInt16 charID)  // ʹ�ý�ɫ��½��Ϸ����
        {
            WorldPack pack = new WorldPack(Opcodes.CMSG_PLAYER_LOGIN,sizeof(UInt16));
            pack.W((UInt16)charID);            
            OutPacket(pack);
        }

        bool m_isLogin = false;

        public bool c_isLogin()
        {
            return m_isLogin;
        }
		
        // on conncted.
        private void _handleAuthChallenge(WorldPack wp) // this should be in....
        {   
            // send our client proof to server to complete authChallenge...now do nothing.            
            Console.WriteLine("Connected...handleChallenge successfull");
            m_isLogin = true;
        }

        // on login
        private void _handleAuthResponse(WorldPack pack)
        {
            string account = "";
            pack.R(ref account);
            Console.WriteLine("login accout {0} success;",account);
        }

        private void _handleCharList(WorldPack pack)
        {
            UInt16 size = 0;
            pack.R(ref size);
            for (int i = 0; i < size;i++ )
            {
                _handleAddChar(pack);
            }
        }

        private void _handleAddChar(WorldPack pack)
        {
            UInt16 id = 0;
            string name = "";
            bool male = true;
            UInt16 race = 0;
            UInt16 lv = 0;
            pack.R(ref id);
            pack.R(ref name);
            pack.R(ref male);
            pack.R(ref race);
            pack.R(ref lv);   

            // add this char to your elder list.
            string str = String.Format(" Add char id = {0},name = {1}, is {2}, race is {3},lv is {4}",
                id,
                name,
                male?"��":"Ů",
                race,
                lv);
            Debug.Log(str);
        }
        
	}
}
