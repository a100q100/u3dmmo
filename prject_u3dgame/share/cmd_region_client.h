
// cmd_region_client.h

#ifndef __CMD_REGION_CLIENT_H__
#define __CMD_REGION_CLIENT_H__
#ifndef _MJ_NEW
const char GAME_COPY_RIGHT =95;//��Ϸ�汾��
#else
const char GAME_COPY_RIGHT =107;//��Ϸ�汾��
#endif
/* chat channel type */
const char CHAT_CHANNEL_NORMAL  = 1;//��ͨ
const char CHAT_CHANNEL_TEAM    = 2;//�Ŷ�
const char CHAT_CHANNEL_PARTY   = 3;//����
const char CHAT_CHANNEL_BROTHER = 4;//�ֵ�
const char CHAT_CHANNEL_TOP		= 5;//ͣ����ͷ��
const char CHAT_CHANNEL_PRIVATE = 6;//˽��
const char CHAT_CHANNEL_SYSTEM  = 7;//ϵͳ//0-100��ӦstrChatPromptInfo[]��>100Ԥ��
const char CHAT_CHANNEL_ITEM_INFO	= 8;//������Ϣ
const char CHAT_CHANNEL_NPC_SAY		= 9;//ncp say

const char CHAT_CHANNEL_CRY			= 10; //��Ƶ��
const char CHAT_CHANNEL_FRIEND		= 11;//����Ƶ��
const char CHAT_CHANNEL_FRIEND_MY   = 12;//�ҵĺ���
const char CHAT_CHANNEL_WORLD		= 13;
const char CHAT_CHANNEL_MAX			= 14;//Ƶ�����ܴ���CHAT_CHANNEL_MAX

const char CHAT_CHANNEL_ERRORREPORT = 40;//������Ϣ���ط�����

const char CHAT_CHANNEL_NPCTYPE_SAY		= 20;//npc����˵��
const char CHAT_CHANNEL_LIUYANBAN		= 21;//���԰�
//һЩ�л�
const char SAY_FIGHT_CALL	= 30;//ս��˵�� say,����֧Ԯ

const char SYSTEM_MESSAGE_LUA = 1;

/* sync flag */
const char SYNC_FLAG_COMPLEX_MODEL	= 1;
const char SYNC_FLAG_POSITION		= 2;
const char SYNC_FLAG_DIRECTION		= 4;
const char SYNC_FLAG_USER			= 8;
const char SYNC_FLAG_TASK_NPC		= 16;
const char SYNC_FLAG_STATIC			= 32;

// const char MOVE_STATE_VEH		= 8;



//#pragma message("�������ĳ�char��")

//base yes no//���������ڴ��������֣���Ҫ�ж�����
const char EVENT_YES				= 1;
const char EVENT_NO					= 2;
const char EVENT_TEMP				= 3;
const char EVENT_NO_COPYMAP			= 4;//û�и�����

const char SCRIPT_SCENE				= 1;//�����ű�
const char SCRIPT_NPC				= 2;//��ʱ����
const char SCRIPT_TASK_START		= 3;//��ȡ����ű�
const char SCRIPT_TASK_AWARD		= 4;//��������ű�
const char SCRIPT_TASK_CANCEL		= 5;//ȡ�����ڽ��е�����
const char SCRIPT_TASK_MAPTIME		= 6;//У����ͼ���ڽ��е�����ʱ��
const char SCRIPT_TASK_NOMAPTIME	= 7;//ȡ����ͼ���ڽ��е�����ʱ��

const char SCRIPT_MONEY	= 8;//�ź�-Ǯ
const char SCRIPT_TASK_STATEERROR		= 9;//�������״̬�������

const char SCRIPT_CHANGEITEM	= 11;//ʹ�ô��͵���

const char SCRIPT_LEVEL_JIANGLI			= 18;	//�ȼ�����

const char SCRIPT_CHENGMI_INFO		= 31;//
const char SCRIPT_CHENGMI_INFO_TAR	= 34;//���˷�����

const char TASK_STATEERROR_TONGSHUAI	= 100;//�������״̬�����������ͳ˧��


const char OK_JIANGLI				= 1;	//
const char ERROR_JIANGLI_LEVEL		= 2;	//���𲻹�
const char ERROR_JIANGLI_ED			= 3;	//�Ѿ�����

//����ר��
const char PET_ATTACK		= 1;		// ����
//const char PET_NO_ATTACK	= 2;		// 
const char PET_FOLLOW		= 2;		//�������� 
const char PET_STOP			= 3;		// ��������ֻ���򲻹���״̬
//const char PET_OUR_ROUND	= 3;		// ���������
const char PET_SKILL		= 4;		// ʹ�ó��＼��
const char PET_DELETE		= 5;		// ���ճ���


const char GAME_SERVER_MAIN			= 1;		//��������
const char GAME_SERVER_COPY			= 2;		//����������
const char GAME_SERVER_FACTION		= 3;		//���������
const char GAME_SERVER_MAX			= 4;		//Max������

const short EVENT_LEVEL_UP			= 1;
const short EVENT_CHANGE_HEAD		= 2;
const short EVENT_CHANGE_SCENE		= 3;
const short EVENT_LEAVE_GAME		= 4;

const char NEW_EVENT_CHENMI_CHECK					=11;//���Լ��

//exchange_item
const char EXCHANGE_NONE			= 0;//�޴���
const char EXCHANGE_ERROR			= 1;//ʧ����ʾ
const char EXCHANGE_CANCEL			= 2;
//const char EXCHANGE_INPUTOK			= 3;
const char EXCHANGE_ENDOK			= 4;
const char EXCHANGE_REQUEST			= 5;//������
//const char EXCHANGE_ALLOW			= 6;//��Ӧ����allow 
//const char EXCHANGE_REFUSE			= 7;//�ܾ�����refuse
const char EXCHANGE_UPDATE			= 8;//�Է����½������ĵ���
const char EXCHANGE_UPDATE_MONEY	= 9;//�Է����½������Ľ�Ǯ��
//const char EXCHANGE_OPEN			= 10;//�򿪽���
//const char EXCHANGE_CLOSE			= 11;//�رս���

const char EXCHANGE_QUERYALLOK		= 10;
const char EXCHANGE_ALLOK			= 11;	//ȫ��������
const char EXCHANGE_ALLCANCEL		= 12;
const char EXCHANGE_CHANGECANCEL	= 13;	


//shop item
const char SHOP_BUY					= 1;//��
const char SHOP_SELL				= 2;//��
const char SHOP_REPAIR				= 3;//�޸�//�ͻ���Ԥ�ж�ʹ��
const char SHOP_REPAIR_EQUIP		= 4;//�޸�װ����
const char SHOP_REPAIR_PACK			= 5;//�޸�������
const char SHOP_REPAIR_ALL			= 6;//�޸�������ȫ��
const char SHOP_LIFA				= 7;//��
const char SHOP_RANFA				= 8;//Ⱦ��

const char SHOP_VIPBUY				= 9;//vip����
const char SHOP_UNIONBUY			= 10;//��������

const char JIFEN_SHOP				= 11;//�����̳�


const char MYSELL_START				= 1;	//��ʼ��̯
const char MYSELL_END				= 2;	//��̯
const char MYSELL_UPDATEMONEY		= 3;	//���¼۸�
const char MYSELL_BUYITEM			= 4;	//������Ʒ
//const char MYSELL_MESSAGE			= 5;	//����
const char MYSELL_LOOK				= 6;	//�鿴̯λ��Ϣ

//const char MYSELL_ADDITEM			= 6;	//��Ӱ�̯��Ʒ
//const char MYSELL_DELITEM			= 7;	//�¼�


const char CHANGE_PK                = 7;	//�޸�PK״̬ �Ǻ� ��Ȼ�ŵ�������
const int MAX_PK_OFFSET				= 10;
const int MIN_PK_LEVEL				= 20;	

const char WUQI_ATTACK_THROWSTONE_START				= 1;	//Ͷʯ����ʼͶʯ
const char WUQI_ATTACK_THROWSTONE_END				= 2;	//Ͷʯ��Ͷ��Ŀ���



const char WUQI_ATTACK_USESKILL				= 100;	//��������/Ⱥ����ʱ������

//ITEM_EQUIP = 0,
//ITEM_PACK  = 1,
// task
/*const char TASK_START				= 1;//��ȡ����
const char TASK_AWARD				= 2;//��������
const char TASK_ITEM				= 3;//��������������

const char TASK_OVER				= 4;//����ɵ�����
const char TASK_RUN					= 5;//���ڽ��е�����
const char TASK_CANCEL				= 6;//ȡ�����ڽ��е�����
const char TASK_ADD					= 7;//ɱ��һ������
*/
const char GUOZHAN_START			= 1;//��ս��ʼ
const char GUOZHAN_END				= 2;//��ս����
const char GUOZHAN_JUDIAN_DEAD		= 3;//��սһ���ݵ㱻��
const char GUOZHAN_ADDGONGXUN		= 4;//��ս��������,���¹�ѫ�ͻ��˼�
const char GUOZHAN_GUOJIAGONGXUN	= 5;//��ս���¹��ҹ�ѫ
const char GUOZHAN_GUOJIAGEREN		= 6;//��ս��ǰ���Ҹ������ѫ//��ʾ��

const char GONGCHENG_START			= 11;//����ս��ʼ
const char GONGCHENG_END			= 12;//����ս����
const char GONGCHENG_GONGXUN		= 13;//����սս���¹��ҹ�ѫ


//cim
const char CIM_REQUEST					= 1;//����
const char CIM_ALLOW					= 2;//ͬ��
const char CIM_REFUSE					= 3;//�ܾ�
const char CIM_EXIT						= 4;//�˳�

//team
const char TEAM_CREATE					= 1;//����
const char TEAM_REQUEST					= 2;//����
const char TEAM_ALLOW					= 3;//ͬ��
const char TEAM_REFUSE					= 4;//�ܾ�
const char TEAM_LEAVE					= 5;//���
const char TEAM_JOIN					= 6;//����
const char TEAM_DELETE					= 7;//��ɢ
const char TEAM_INFO					= 8;//ȫ����Ϣ
const char TEAM_HAVE					= 9;//���ж���
const char TEAM_OUT						= 10;//�ϳ�����
const char TEAM_UPDATA					= 11;//ˢ��λ��
const char TEAM_LEVEL_OUT				= 12;//�ȼ�����
const char TEAM_SETCAP					= 13;//���öӳ�
const char TEAM_NOTFIND					= 14;//����Ķ����Ҳ���
const char TEAM_CHANGEITEMSHARE			= 15;//������Ʒ���䷽ʽ
const char TEAM_CHANGEEXPSHARE			= 16;//����������䷽ʽ

const char OBJECT_USER					= 1;	// ����
const char OBJECT_ITEM					= 2;	// ��Ʒ
const char OBJECT_EFFECT				= 3;	// Ч�� �ر��ϵ�Ч��(CFloorEffect)
const char OBJECT_BODY_EFFECT			= 4;	// Ч�� �����ϵ�Ч��(CFloorEffect)
const char OBJECT_BODY_BACK				= 5;	// �������
const char OBJECT_BOSS_BIANSHEN			= 6;	// BOSS����
const char OBJECT_PLAYER_BIANSHEN		= 7;	// Player����
const char OBJECT_ADD_BODY_EFFECT		= 8;	// ���������Ч��
const char OBJECT_DIYUHUO_BIANSHEN		= 9;	// ���������
const char OBJECT_DIYUHUO_BACK			= 10;	// ���������������

const char OBJECT_NEWPLAYER_BIANSHEN	= 11;	// �µ��������
const char OBJECT_NEWPLAYER_BACK		= 12;	// �µ���������ȥ

const char OBJECT_SKILL_EFFECT			= 13;	// ����Ч��
const char OBJECT_CLEARALL_EFFECT		= 14;	// �������Ч��
//�뿪��Ϸ
const char LEAVEGAME_ALL					= 1;//��ȫ�뿪��Ϸ
const char LEAVEGAME_SELECT					= 2;//�뿪��Ϸ��ѡ�˽���
const char LEAVEGAME_PWD					= 3;//�뿪��Ϸ��//���˺�������ȫ�رվͿ�����

//login server//Ϊ�˼ӿ��ٶ��о�����
const char LOGIN_NAME_ERROR					= 1;//���ִ���
const char LOGIN_PWD_ERROR					= 2;//�������
const char LOGIN_IN_OK						= 3;//����ɹ�
const char LOGIN_CREATE						= 4;//������ɫ
const char LOGIN_CREATE_OK					= 5;//������ɫ�ɹ�
const char LOGIN_CREATE_ERROR				= 6;//������ɫʧ��
const char LOGIN_DELETE						= 7;//ɾ����ɫ
const char LOGIN_DELETE_OK					= 8;//ɾ����ɫ�ɹ�
const char LOGIN_DELETE_ERROR				= 9;//ɾ����ɫʧ��
const char LOGIN_LOGIN_IN					= 10;//�˺�ʹ����

const char LOGIN_ROLE_ERROE					= 11;//��ȡ�������

const char LOGIN_COPY_ERROE					= 12;//�汾����
const char LOGIN_SELECT_ROLE				= 13;//ѡ�����������Ϸ

const char LOGIN_CREATE_ERROR_NAME			= 14;//������ɫʧ���ǳ��Ѵ���

const char LOGIN_SERVERSTART_ERROE			= 15;//��������δ����
const char LOGIN_USER_STOP					= 16;//�˺�δ����
const char LOGIN_USER_MORE					= 17;//����̫��

const char LOGIN_USER_STOPTIME				= 18;//����ͣһ��ʱ��

const char LOGIN_IN_OK_SELECT				= 19;	//����ɹ�

const char LOGIN_USER_DELAYTIME				= 20;//��������һ��ʱ��

const char LOGIN_IN_OK_PWD					= 21;	//����ɹ�����Ҫ�����������

const char LOGIN_IN_OK_REAL					= 22;	//real������֤�ɹ�
const char LOGIN_IN_ERROR_REAL				= 23;	//real������֤����
const char LOGIN_DB_ERROR				    = 24;	// sammy

const char LOGIN_IN_ERROR_HF				= 25;	//haofang������֤ʧ��
const char LOGIN_IN_OK_MATRIX				= 26;//����ɹ�����Ҫ�������

const char LOGIN_IN_OK_PASSPORD				= 29;//��֤ͨ��֤�ɹ�
const char LOGIN_IN_ERROR_PASSPORD			= 30;

const char LOGIN_IN_BIND_MACINFO			= 33;	//mac����Ϣ

const char LOGIN_USER_STOP_BY_CALL			= 34;	//�绰�ܱ�
const char LOGIN_USER_FROZEN				= 36;	//����

const char LOGIN_IN_OK_REAL_BUT_NO_CHENGREN	= 38;	//��֤�ɹ����Ƿǳ��˲�����Ϸ

const char LOGIN_IN_OK_XUNLEI					= 50;	//real������֤�ɹ�
const char LOGIN_IN_ERROR_XUNLEI				= 51;	//real������֤����

const char LOGIN_IN_BACKUP_STATE			= 52;	//���ݴ��ڱ���״̬ add by coke 2009041300
// replication update type 
//add by coke 20090731
const char USER_STATE_LOCK						=1;	//���÷�ͣ
const char USER_STATE_LOCK_BY_TIME				=2;	//��ʱ��ͣ
const char USER_STATE_LOCK_BY_TJ0				=3;	//�ѻ���ͣ
const char USER_STATE_LOCK_BY_TJ1				=4;	//�ѻ���ͣ
const char USER_STATE_LOCK_BY_CALL				=5;	//�绰�ܱ�
const char USER_STATE_FROZEN					=10;//����
//end by coke 20090731
//


const char REP_UPDATE_ALL  		= 0;
const char REP_UPDATE_BASE 		= 10;
const char REP_UPDATE_TMP  		= 11;//����һЩ��Ҫ����Ϣ
const char REP_UPDATE_TMP2 		= 12;
const char REP_UPDATE_ADD  		= 13;
const char REP_UPDATE_DELETE	= 14;
const char REP_UPDATE_TASKCRE		= 15;//�����������
const char REP_UPDATE_TASKRAND		= 16;//�����������
const char REP_UPDATE_IMPACTTIME	= 17;//����Ч��ʱ��

const char REP_UPDATE_ROUND  		= 13;//����һЩ��Ҫ����Ϣ����Χ�����
const char REP_UPDATE_ROUND_BASE  		= 14;//����һЩ��Ҫ����Ϣ����Χ�����
const char REP_UPDATE_TMP3 		= 15;
const char REP_UPDATE_ROUND_TMP  		= 16;//����һЩ��Ҫ����Ϣ����Χ�����

const char REP_UPDATE_DURABILITY 		= 20;//�����;õ�
const char REP_UPDATE_REPAIRALL 		= 21;//�޸������;�
const char REP_UPDATE_MAJIANG = 22;
const char REP_UPDATE_KEYSAVE = 23;
const char REP_UPDATE_KEYSAVE_SINGLE = 24;
//join sys
//0�ϲ�������1Ƕ�뱦ʯ
const char JOIN_NET_NORMAL					= 1;//�ϳ�
const char JOIN_NET_QIANRU					= 2;//Ƕ��
const char JOIN_NET_QIANGHUA				= 3;//ǿ������
const char JOIN_NET_DADONG					= 4;//��
const char JOIN_NET_XISHOU					= 5;//����
const char JOIN_NET_DIEJIA					= 6;//����
const char JOIN_NET_BAIFEN					= 7;//�϶��ɹ�

const char JOIN_NET_LEAVEITEM				= 8;//�ָ�
const char JOIN_NET_KEYBOX					= 9;//���ӿ���

const char JOIN_NET_RANDATTR				= 10;//������ϴ
const char JOIN_NET_FANGUP				= 11;//����ǿ��
const char JOIN_NET_LIFEUP				= 12;//����ȼ��

const char JOIN_NET_RUNSCRIPT				= 13;//�ܽű�

const char JOIN_NET_XISHOU_EXP				= 14;//���վ���

const char JOIN_NET_CLEARATTR				= 15;//
const char JOIN_NET_PETEXP					= 16;//

const char JOIN_NET_TIANSHEN				= 17;//

const char JOIN_NET_BANGDING					= 18;//bangding

const char JOIN_NET_WEAPON_UP					= 19;//����ǿ��

const char JOIN_NET_OTHER_ATTR_RESORT			= 20;//����������������

const char JOIN_NET_XISHOU_SHEN_QI				= 21;//��������

const char JOIN_NET_PETFOOD					= 31;//petfood
const char JOIN_NET_ATOB					= 32;//a to b

// ��������
const char LIFESKILL_COLLECT		= 1;	// �ɼ�
const char LIFESKILL_COMPOS			= 2;	// �ϳ�
const char LIFESKILL_FJ				= 3;	//�ֽ�
const char LIFESKILL_SP				= 4;	//����

const char LIFESKILL_PEIFANG_UPDATE = 5;	//�����䷽
const char LIFESKILL_PEIFANG_UPDATE_SINGLE = 6;	//�����䷽
const char LIFESKILL_DELBLOCK = 7;
const char LIFESKILL_SETBLOCK = 8;		

const char LIFESKILL_YUEGUANG = 9;			//�¹ⱦ��


const char ERROR_YUEGUANG_NOFIND = 10;		//Ҫ�ϳɵĶ����Ҳ���
const char ERROR_YUEGUANG_FULL = 11;		//������
const char ERROR_YUEGUANG_NOSOURCE = 12;	//���ϲ���
const char ERROR_YUEGUANG_USEFAIL = 13;		//�ϳ�ʧ����

/*
const char LIFESKILL_COLLECT_START		= 1;	// ��ʼ�ɼ�
const char LIFESKILL_COLLECT_CANCEL		= 2;	// ȡ���ɼ�
const char LIFESKILL_COLLECT_FINISH		= 3;	// �ɼ�����(c->s)
const char LIFESKILL_COLLECT_SUCCESS	= 4;	// �ɹ��ɼ�(s->c)
const char LIFESKILL_COLLECT_FAILD		= 5;	// �ɼ�ʧ��(s->c)
*/
const char LIFESKILL_COLLECT_START		= 11;	// ��ʼ�ɼ�
//const char LIFESKILL_COLLECT_CANCEL		= 12;	// ȡ���ɼ�//�߶��Զ�����
const char LIFESKILL_COLLECT_FINISH		= 13;	// �ɼ�����(c->s)
const char LIFESKILL_COLLECT_SUCCESS	= 14;	// �ɹ��ɼ�(s->c)
const char LIFESKILL_COLLECT_FAILD		= 15;	// �ɼ�ʧ��(s->c)

const char LIFESKILL_QUANPIN			= 16;	// ȫ������

const char LIFESKILL_BREAK_SOUL			= 17;	// ���ֽ�

const char LIFESKILL_COMBIN_SHENQI_RT	= 18;	// �����ϳɷ���

const char LIFESKILL_REPAIR_ITEM		= 19;	// ����ҩ��

const char LIFESKILL_COMPOS_COMBIN = 1;

const char LIFESKILL_FJ_FJITEM_BYNPC = 1;		//npc�ֽ�
const char LIFESKILL_FJ_FJITEM_BYGUILD = 2;		//����ֽ�


/* region send to client */
const short r2c_base				= 1000;
const short r2c_login_ret			= r2c_base + 1;
const short r2c_chat				= r2c_base + 2;
const short r2c_begin_see			= r2c_base + 3;		//��ʼ�������
const short r2c_end_see				= r2c_base + 4;		//�����������
const short r2c_snapshot			= r2c_base + 5;

const short r2c_walk_to				= r2c_base + 7;
const short r2c_update_skill		= r2c_base + 8;
const short r2c_use_skill			= r2c_base + 9;

const short r2c_update_item			= r2c_base + 10;
const short r2c_add_item			= r2c_base + 11;	//���ϼ������������
const short r2c_remove_item			= r2c_base + 12;
const short r2c_get_item_error		= r2c_base + 13;	//�õ�����ʧ��



const short r2c_update_attr			= r2c_base + 14;	//ˢ������
const short r2c_update_money		= r2c_base + 15;	//ˢ��Ǯ
//const short r2c_update_effect_attr	= r2c_base + 16;	//ˢ��Ч������

const short r2c_effect_list			= r2c_base + 16;	//Ч���б�

const short r2c_teleport			= r2c_base + 17;	//˲��
const short r2c_fight_win			= r2c_base + 18;	//ս��ʤ��
const short r2c_level_up			= r2c_base + 19;	//����
const short r2c_update_task			= r2c_base + 20;	


const short r2c_attack				= r2c_base + 21;	//ս��
//����
const short r2c_exchange_item		= r2c_base + 22;//���֮�佻����������
//����
const short r2c_task				= r2c_base + 23;//
//��Ƶ����CIM
const short r2c_cim					= r2c_base + 24;
//�뿪��Ϸ
const short r2c_leave_game			= r2c_base + 25;

const short r2c_team				= r2c_base + 26;
//����
const short r2c_killed				= r2c_base + 27;

const short r2c_relive				= r2c_base + 28;

const short r2c_fight_hp			= r2c_base + 29;

const short r2c_look_play			= r2c_base + 30;

const short r2c_skill_hp			= r2c_base + 31;

const short r2c_who_die				= r2c_base + 32;

const short r2c_fight_miss			= r2c_base + 33;
const short r2c_skill_up			= r2c_base + 34;	//����


const short r2c_update_state_attr	= r2c_base + 35;	//����״̬λ
const short r2c_my_sell				= r2c_base + 36;	//��̯
const short r2c_show_type			= r2c_base + 37;	//�������
const short r2c_change_scene		= r2c_base + 38;	//�л�����

const short r2c_runscript			= r2c_base + 39;	//

const short r2c_lifeskill			= r2c_base + 40;	// �����ͨ��

const short r2c_wuqi_attack			= r2c_base + 41;	// ��������

const short r2c_vip					= r2c_base + 42;	// vi����ͨ��

const short r2c_guozhan				= r2c_base + 43;	// ��ս

const short r2c_mail_item			= r2c_base + 44;	// �ʼĹ���ר��ͨ��
const short r2c_marry				= r2c_base + 45;

const short r2c_even				= r2c_base + 46;

const short r2c_guild_command		= r2c_base + 87;	//
const short r2c_gm_command			= r2c_base + 88;	//
const short r2c_update_skill_gm		= r2c_base + 89;	// Update specified role's data, not player self
const short r2c_update_item_gm		= r2c_base + 90;
const short r2c_update_attr_gm		= r2c_base + 91;
const short r2c_update_task_gm		= r2c_base + 92;

const short l2c_login_server	= r2c_base + 100;
const short l2c_gm_command		= r2c_base + 101;
const short l2c_change_scene	= r2c_base + 102;
const short l2c_guild_command	= r2c_base + 103;
const short l2c_friend_command	= r2c_base + 104;
const short l2c_gm_command_client= r2c_base + 105;
const short l2c_apex_command	= r2c_base + 106;



const short r2c_icq_setfriendtype_result	= r2c_base + 500; // ???

/*���������ר��������Ϣ*/

const short r2c_union_base = r2c_base + 1000;
const short r2c_union_add_member = r2c_union_base + 1;




/* client send to region */
const short c2r_base				= 1000;
const short c2r_chenmi				= c2r_base+c2r_base+1;
const short r2c_chenmi				= c2r_chenmi;
const short c2r_login				= c2r_base + 1;
const short c2r_chat				= c2r_base + 2;
const short c2r_walk_to			    = c2r_base + 3;
const short c2r_use_skill			= c2r_base + 4;
const short c2r_attack				= c2r_base + 5;
const short c2r_move_item			= c2r_base + 6;
const short c2r_drop_item			= c2r_base + 7;
const short c2r_get_item			= c2r_base + 8;
const short c2r_run_script			= c2r_base + 9;
const short c2r_use_item			= c2r_base + 10;

const short c2r_role_state   		= c2r_base + 11;//����״̬λ//��������״̬

const short c2r_my_sell   			= c2r_base + 12;//��̯

//const short c2r_chat_info			= c2r_base + 11;//�鿴������Ϣ//�����������Ϣ

const short c2r_pet_command	  		= c2r_base + 13;//��������

//����
const short c2r_exchange_item		= c2r_base + 15;//���֮�佻����������
//�̵�
const short c2r_shop_item			= c2r_base + 16;//�̵��������
//����
const short c2r_task				= c2r_base + 17;//����

//��Ƶ����CIM
const short c2r_cim					= c2r_base + 18;
//����
const short c2r_relive				= c2r_base + 19;


//�뿪��Ϸ
const short c2r_leave_game			= c2r_base + 21;

//�Ŷ�����
const short c2r_team				= c2r_base + 22;

const short c2r_look_play			= c2r_base + 23;

const short c2r_join_sys			= c2r_base + 24;//�ϳ�ϵͳ���졣�������ļ�����
//��������
//const short c2r_yule_center			= c2r_base + 32;
const short c2r_lifeskill			= c2r_base + 25;	// �����ͨ��

const short c2r_wuqi_attack			= c2r_base + 26;	// ��������

const short c2r_juqiattack			= c2r_base + 27;

const short c2r_mail_item			= c2r_base + 28;	//�ʼĵ���ר��ͨ��

const short c2r_marry				= c2r_base + 29;
const short c2r_rank				= c2r_base + 30;

//��������һ����ֻ������һ��
const short c2r_gm_command			= c2r_base + 88;
const short c2l_gm_command			= c2r_base + 89;
const short c2l_friend_command		= c2r_base + 90;
const short c2l_guild_command		= c2r_base + 91;
const short c2r_guild_command		= c2r_base + 92;
const short c2l_apex_command		= c2r_base + 93;
const short c2l_leave_game			= c2r_base + 94;

const short c2l_login_server		= c2r_base + 100; // ???
const short c2l_house				= c2r_base + 101; // ���뷿��
const short c2l_even				= c2r_base + 102; // һЩ������¼�
const short c2l_neweven				= c2r_base + 103; // һЩ������¼�
const short c2l_rank				= c2r_base + 104;

const short c2r_use_fight_item		= c2r_base+122 ;//�Զ���ʹ�õ���

const short c2l_script				= c2r_base + 200; // ����¼�
/* scene send to login */
const short s2l_base				= 2000;
const short s2l_login_scene			= s2l_base + 1;
const short s2l_check_login			= s2l_base + 2;//����������
const short s2l_updata_attr			= s2l_base + 3;//�������ݿ���Ϣ
const short s2l_change_secene		= s2l_base + 4;//�л�����
const short s2l_leave_game			= s2l_base + 5;//�뿪��Ϸ
const short s2l_even				= s2l_base + 6;//��Ϸ�¼�

const short s2l_gm_command			= s2l_base + 10;
const short s2l_guild_command		= s2l_base + 11;

const short s2l_house				= s2l_base + 12;
const short s2l_rank				= s2l_base + 13;

/* login send to scene */
const short l2s_base				= 2000;
const short l2s_login_scene			= l2s_base + 1;
const short l2s_check_login			= l2s_base + 2;
const short l2c_chat				= l2s_base + 3;
const short l2s_even				= l2s_base + 4;
const short l2c_even				= l2s_base + 5;

const short l2s_gm_command			= l2s_base + 10;
const short l2s_guild_command		= l2s_base + 11;
const short l2s_rank_command		= l2s_base + 12;

const short l2c_house				= l2s_base + 21;
const short l2s_house				= l2s_base + 22;
const short l2c_neweven				= l2s_base + 23;

const short l2s_script				= l2s_base + 200; // ����¼�

const short r2c_exp_rate =r2c_base+300;//add by coke 20090303
/*
const short r2c_icq_setfriendtype	= c2r_base + 500;//�Ӻ��ѣ���������ɾ��
const short r2c_icq_loadfriendtype	= c2r_base + 501;//���غ���
const short c2r_icq_add	= c2r_base + 502;//�Ӻ���
const short r2c_icq_add	= c2r_base + 503;//�Ӻ���
const short c2r_icq_agree	= c2r_base + 504;//ͬ��

const short c2r_icq_message	= c2r_base + 505;//���͵���Ϣ
const short r2c_icq_snapshot_up	= c2r_base + 506;//���ͼ����Ϣ
const short r2c_icq_snapshot_down	= c2r_base + 507;//���ͼ����Ϣ
const short c2r_icq_delete	= c2r_base + 508;//����ɾ����Ϣ

const short c2r_icq_system	= c2r_base + 509;//ϵͳ������Ϣ

const short r2c_icq_leavegame	= c2r_base + 510;//ϵͳ������Ϣ

const short c2r_union_base = c2r_base + 1000;
const short c2r_union_update_union = c2r_union_base + 1; //�������������¹�����Ϣ
*/
const short MAX_ROLE_COUNT=3;//��ɫ�����
const short LOGIN_READ_INFO=4;//���������Ϣ��ȡ��

const short NAME_LENGH_MIN=4;
const short NAME_LENGH_MAX=16;

const short PWD_LENGH_MIN=6;
const short PWD_LENGH_MAX=16;

const short ROLE_TYPE_MAX=8;//��ʱ���͵��������
const short ROLE_TYPE_BEGIN_ID=1001;

const int CONST_HAIR_START[ROLE_TYPE_MAX] = {150, 950, 350, 1150, 550, 1350, 750, 1550};
const int CONST_HAIR_COUNT[ROLE_TYPE_MAX] = {11, 11, 11, 11, 11, 11, 11, 11};



//GMȨ��
const char GM_NULL		= 0;//��Ȩ��
const char GM_MIN		= 1;	// ���Ȩ��
const char GM_MAX		= 10;	// ���Ȩ��
const char GM_AGENT		= 4;

const char GM_REQUEST_OK				= 0;
const char GM_REQUEST_FAILED			= -1;
const char GM_REQUEST_DATABASE_ERROR	= -2;
const char GM_REQUEST_PLAYER_OFFLINE	= -3;
const char GM_REQUEST_PLAYER_NOTEXIST	= -4;
const char GM_REQUEST_NOT_DEFINED		= -5;

const char HIT_MISS		= 0;			// û����
const char HIT_DAMAGE	= 1;			// �����˺�
const char HIT_DOUBLE	= 2;			// ˫�����
const char HIT_DEAD		= 3;			// �ǶԷ�����
const char HIT_SKILL_DOUBLE = 4;		// ����˫�����
const char HIT_SKILL_MISS	= 5;		// ����û����
const char HIT_SKILL_STATE	= 6;		// ���������˺���״̬
const char HIT_SKILL_DOUBLE_STATE = 7;	// ����˫���������״̬
const char HIT_SKILL_GOOD	= 8;		// ���ܼ�Ѫ
const char HIT_SKILL_HITTOO	= 9;		// ����˫����
const char HIT_SKILL_MISSSTATE	= 10;		// ����״̬û����

const short GM_COMMAND_CLOSE_SERVER		= 1;	//�رշ�����
const short GM_COMMAND_PUT_CREATURE		= 2;	//�ڵ�ͼ�Ϸ��ù���
const short GM_COMMAND_KILL_CREATURE	= 3;
const short GM_COMMAND_DB_ADDRESS		= 4;
const short GM_COMMAND_CLIENT_TEST		= 5;
const short GM_COMMAND_CLIENT_TEST_RES	= 6;
const short GM_COMMAND_CLIENT_TEST_RES2	= 7;
const short GM_COMMAND_WAIGUA_KICKOUT	= 8;	//add by coke �����
const short GM_COMMAND_WAIGUA_COUNT		= 9;
const short GM_COMMAND_WAIGUA_TEST		= 10;

const short GM_COMMAND_CLIENT_TEST0		= 23;
const short GM_COMMAND_CLIENT_TEST1		= 11;
const short GM_COMMAND_CLIENT_TEST2		= 37;
const short GM_COMMAND_CLIENT_TEST3		= 39;
const short GM_COMMAND_CLIENT_TEST4		= 55;
const short GM_COMMAND_CLIENT_TEST5		= 93;
const short GM_COMMAND_CLIENT_TEST6		= 114;
const short GM_COMMAND_CLIENT_TEST7		= 220;
const short GM_COMMAND_CLIENT_TEST8		= 319;
const short GM_COMMAND_CLIENT_TEST9		= 402;

const short GM_COMMAND_ACCOUNT_BASE = 10;
const short GM_COMMAND_ACCOUNT_INFO_GET			= GM_COMMAND_ACCOUNT_BASE+1;	//ͨ���ʺŵõ������Ϣ
const short GM_COMMAND_ACCOUNT_PASSWORD_RESET	= GM_COMMAND_ACCOUNT_BASE+2;	//add by coke ���˺�����ù�����ȡ��
const short GM_COMMAND_ACCOUNT_BLOCK			= GM_COMMAND_ACCOUNT_BASE+3;	//add by coke �����˺�ID���˺�
const short GM_COMMAND_ACCOUNT_UNBLOCK			= GM_COMMAND_ACCOUNT_BASE+4;	//add by coke �����˺�ID����˺�
const short GM_COMMAND_ACCOUNT_GET_ROLE			= GM_COMMAND_ACCOUNT_BASE+5;	//add by coke ͨ����ɫ��ȡ�˺���Ϣ
const short GM_COMMAND_ACCOUNT_AUTHORITY		= GM_COMMAND_ACCOUNT_BASE+6;
const short GM_COMMAND_ACCOUNT_ROLE_QUERY		= GM_COMMAND_ACCOUNT_BASE+7;	//add by coke ���ݽ�ɫ���������Ϣ
const short GM_COMMAND_ACCOUNT_RESUME			= GM_COMMAND_ACCOUNT_BASE+8;	//add by coke ��ɫ�ָ�
const short GM_COMMAND_ACCOUNT_KICK				= GM_COMMAND_ACCOUNT_BASE+9;	//add by coke ͨ������������

const short GM_COMMAND_PLAYER_INFO_GET			= GM_COMMAND_ACCOUNT_BASE+10;	//add by coke ����ID��ȡ��Ϣ
const short GM_COMMAND_PLAYER_KICK_OFFLINE		= GM_COMMAND_ACCOUNT_BASE+11;	//add by coke ���ݽ�ɫID�߽�ɫ
const short GM_COMMAND_PLAYER_TELEPORT_TOWN		= GM_COMMAND_ACCOUNT_BASE+12;	//add by coke ������ҵ�ָ���ص�
const short GM_COMMAND_PLAYER_ID_GET			= GM_COMMAND_ACCOUNT_BASE+13;	//add by coke ���ݽ�ɫ����ȡ��ɫID
const short GM_COMMAND_PLAYER_MODIFY_ATTRI		= GM_COMMAND_ACCOUNT_BASE+14;
const short GM_COMMAND_PLAYER_EQUIP_ITEM_DEL	= GM_COMMAND_ACCOUNT_BASE+15;
const short GM_COMMAND_PLAYER_EQUIP_ITEM_ADD	= GM_COMMAND_ACCOUNT_BASE+16;
const short GM_COMMAND_PLAYER_PACKAGE_ITEM_DEL	= GM_COMMAND_ACCOUNT_BASE+17;	//add by coke ɾ�������Ʒ
const short GM_COMMAND_PLAYER_PACKAGE_ITEM_ADD	= GM_COMMAND_ACCOUNT_BASE+18;
const short GM_COMMAND_PLAYER_MODIFY_STATE_ATTRI= GM_COMMAND_ACCOUNT_BASE+19;	//add by coke SetAttr
const short GM_COMMAND_PLAYER_INVINCIBILITY		= GM_COMMAND_ACCOUNT_BASE+20;	//add by coke �޵�
const short GM_COMMAND_PLAYER_TELEPORT			= GM_COMMAND_ACCOUNT_BASE+21;	//add by coke ������ҵ�ָ���ص�
const short GM_COMMAND_PLAYER_TELEPORT_TOWN_GAME= GM_COMMAND_ACCOUNT_BASE+22;	//add by coke ������ҵ�ָ���ص�
const short GM_COMMAND_PLAYER_KICK_OFFLINE_GAME	= GM_COMMAND_ACCOUNT_BASE+23;	//add by coke ����ID����
const short GM_COMMAND_PLAYER_KICK_OFFLINE_NAME	= GM_COMMAND_ACCOUNT_BASE+24;	// Kick off a player from login server by role name
const short GM_COMMAND_PLAYER_ID_GET_TELEPORT	= GM_COMMAND_ACCOUNT_BASE+25;
const short GM_COMMAND_PLAYER_RESET_STORE_PASSW	= GM_COMMAND_ACCOUNT_BASE+26;	//add by coke �޸Ĳֿ�����

const short GM_COMMAND_BULLETIN_ADD		   = GM_COMMAND_ACCOUNT_BASE+29;		//add by coke ��ӹ���
const short GM_COMMAND_BULLETIN_DEL		   = GM_COMMAND_ACCOUNT_BASE+30;		//add by coke ɾ������
const short GM_COMMAND_BULLETIN_UPDATE	   = GM_COMMAND_ACCOUNT_BASE+31;		//add by coke ������
const short GM_COMMAND_BULLETIN_DELETEALL  = GM_COMMAND_ACCOUNT_BASE+32;		//add by coke ɾ�����й���

const short GM_COMMAND_CHAT_PLAYER2GM		= GM_COMMAND_ACCOUNT_BASE+40;
const short GM_COMMAND_CHAT_GM2PLAYER		= GM_COMMAND_ACCOUNT_BASE+41;		//add by coke GM�����˵
const short GM_COMMAND_CHAT_MONITOR_REQ		= GM_COMMAND_ACCOUNT_BASE+42;		//add by coke GM����
const short GM_COMMAND_CHAT_MONITOR_CANCEL	= GM_COMMAND_ACCOUNT_BASE+43;		//add by coke GMȡ������
const short GM_COMMAND_CHAT_MONITOR_MSG		= GM_COMMAND_ACCOUNT_BASE+44;
const short GM_COMMAND_CHAT_CRY				= GM_COMMAND_ACCOUNT_BASE+45;
const short GM_COMMAND_CHAT_FORBID			= GM_COMMAND_ACCOUNT_BASE+46;		//add by coke ͨ����ɫID����
const short GM_COMMAND_CHAT_FORBID_NAME		= GM_COMMAND_ACCOUNT_BASE+47;		//add by coke ͨ����ɫ������

const short GM_COMMAND_ONLINE_NUM		= GM_COMMAND_ACCOUNT_BASE+50;
const short GM_COMMAND_TELEPORT			= GM_COMMAND_ACCOUNT_BASE+51;		//add by coke ˲��
const short GM_COMMAND_TELEPORT_TOWN	= GM_COMMAND_ACCOUNT_BASE+52;		//add by coke ����
const short GM_COMMAND_TELEPORT_2_PLAYER	= GM_COMMAND_ACCOUNT_BASE+53;	//add by coke GM���͵�������
const short GM_COMMAND_PLAYER_2_GM			= GM_COMMAND_ACCOUNT_BASE+54;	//add by coke GM�����

const short GM_COMMAND_ACTION_LOG	= GM_COMMAND_ACCOUNT_BASE+60;

const short GM_COMMAND_STARTSERVER	= GM_COMMAND_ACCOUNT_BASE+61;

const short GM_COMMAND_SET_EXPRATE			=GM_COMMAND_ACCOUNT_BASE+63;	//add by coke 20090225�޸ľ��鱶��

const short GM_COMMAND_CHAT_RESET_USER_PWD	=GM_COMMAND_ACCOUNT_BASE+70;	//add by coke 20090720�޸�����ʺ�����
const short GM_COMMAND_CHAT_RESET_USER_JZ	=GM_COMMAND_ACCOUNT_BASE+71;	//add by coke 20090720�����Ҿ���
const short GM_COMMAND_CHAT_RESET_ROLE_CK	=GM_COMMAND_ACCOUNT_BASE+72;	//add by coke 20090720�޸Ľ�ɫ�ֿ�����
const short GM_COMMAND_CHAT_SEARCH_ITEM		=GM_COMMAND_ACCOUNT_BASE+73;	//add by coke 20090720����߱�
const short GM_COMMAND_CHAT_CLEAR_MAC		=GM_COMMAND_ACCOUNT_BASE+76;	//add by coke 20090728���MAC��ַ

// Friend
const char FRIEND_REQUEST_OK			= 0;
const char FRIEND_REQUEST_NOT_EXIST		= -1;
const char FRIEND_REQUEST_ALREADY_EXIST = -2;
const char FRIEND_REQUEST_DATABASE_ERROR= -3;
const char FRIEND_REQUEST_INVLID_PARAM	= -4;
const char FRIEND_REQUEST_NOT_AVAIBLE	= -5;		// ��ҵ�������Ϊ������Ĳ�����Ҫ�󱻾ܾ�
const char FRIEND_REQUEST_OFFLINE		= -6;
const char FRIEND_REQUEST_FULL			= -7;
const char FRIEND_REQUEST_FAILED		= -8;
const char FRIEND_REQUEST_BUSY			= -9;		// The object is in the waring state
const char FRIEND_REQUEST_EMPTY			= -10;		// Only be used in server
// sammy--
const char FRIEND_REQUEST_NOENOUGHITEM	= -11;		// û����Ѫʯ  
const char FRIEND_REQUEST_NOENOUGHMONEY	= -12;		// ս���ʽ�<100W/ 
// --sammy

const char FRIEND_REQUEST_WAR_SELF_WAR		= -20;
const char FRIEND_REQUEST_WAR_SELF_CREATE	= -21;
const char FRIEND_REQUEST_WAR_SELF_PROTECT	= -22;
const char FRIEND_REQUEST_WAR_TARGET_WAR	= -25;
const char FRIEND_REQUEST_WAR_TARGET_CREATE	= -26;
const char FRIEND_REQUEST_WAR_TARGET_PROTECT= -27;

const char FRIEND_STATE_ONLINE	= 0;
const char FRIEND_STATE_OFFLINE = 1;
const char FRIEND_STATE_LEAVE = 2;
const char FRIEND_STATE_REGAME = 3;

const char FRIEND_COMMAND_ADD			= 10;
const char FRIEND_COMMAND_DELETE		= 11;
const char FRIEND_COMMAND_GET_LIST		= 12;
const char FRIEND_COMMAND_STATE_CHANGE	= 13;
const char FRIEND_COMMAND_GET_INFO      = 14;
const char FRIEND_COMMAND_CHANGE_RELATION = 15;
const char FRIEND_COMMAND_ADD_RES		= 16;

// Rank
const char RANK_COMMAND_HEIGHT_UPDATE		= 10;
const char RANK_COMMAND_TAX_RATIO_REQ		= 11;
const char RANK_COMMAND_TAX_RATIO_CHANGE	= 12;
const char RANK_COMMAND_TAX_VALUE_REQ		= 13;
const char RANK_COMMAND_TAX_ADD				= 14;
const char RANK_COMMAND_TAX_GET				= 16;
const char RANK_COMMAND_RORBID_REQ			= 17;
const char RANK_COMMAND_RORBID_BY			= 18;
const char RANK_COMMAND_TAX                 = 65;   //��ְϵͳ��˰��
const char RANK_COMMAND_PLAYERLEVEL         = 66;    //��ְϵͳ��ȡ��ҵȼ�����
const char RANK_COMMAND_PLAYERWEALTH        = 67;    //��ְϵͳ��ȡ��ҲƸ�����
const char RANK_COMMAND_PLAYERGLORY         = 68;    //��ְϵͳ��ȡ�����������
// Guild
// ����,����,����,����,�ж�,��ս,ͬ��,����,�ֿ�,��ѯ,����,����,����, // ��Ҫ����
const char GUILD_ACTION_ZHAOSHOU	= 0;		// ����
const char GUILD_ACTION_KAICHU		= 1;		// ����
const char GUILD_ACTION_GONGGAO		= 2;		// ����
const char GUILD_ACTION_RENMING		= 3;		// ����
const char GUILD_ACTION_DIDUI		= 4;		// �ж�
const char GUILD_ACTION_XUANZHAN	= 5;		// ��ս
const char GUILD_ACTION_TONGMENG	= 6;		// ͬ��
const char GUILD_ACTION_JUANXIAN	= 7;		// ����
const char GUILD_ACTION_CANGKU		= 8;		// �ֿ�
const char GUILD_ACTION_CHAXUN		= 9;		// ��ѯ
const char GUILD_ACTION_JIANZHAO	= 10;		// ����
const char GUILD_ACTION_SHENGCHAN	= 11;		// ����
const char GUILD_ACTION_TUOLI		= 12;		// ����
const char GUILD_ACTION_NUM			= 13;		// 

// ��Ա,��Ӣ,ս��,�ͽ�,����,����,����,����,����,�⽻,���᳤��,�᳤��,	// �����,���߶�
const char GUILD_AUTHORITY_NULL			= 0;		// Not a guild member
const char GUILD_AUTHORITY_HUIYUAN		= 1;
const char GUILD_AUTHORITY_JINGYING		= 2;
const char GUILD_AUTHORITY_ZHANJIANG	= 3;
const char GUILD_AUTHORITY_MENGJIANG	= 4;
const char GUILD_AUTHORITY_ZHANGLAO		= 5;
const char GUILD_AUTHORITY_HUFA			= 6;
const char GUILD_AUTHORITY_XUANCHUAN	= 7;
const char GUILD_AUTHORITY_NEIWU		= 8;
const char GUILD_AUTHORITY_ZHIZAO		= 9;
const char GUILD_AUTHORITY_WEIJIAO		= 10;
const char GUILD_AUTHORITY_FUHUIZHANG	= 11;
const char GUILD_AUTHORITY_HUIZHANG		= 12;
const char GUILD_AUTHORITY_NUM			= 13;

const char GUILD_STATE_AUTHEN_NOT	= 0;
const char GUILD_STATE_AUTHENED		= 1;

// sammy--
const char GUILD_DEVELOP_STATE_INFANCY	= 0;
const char GUILD_DEVELOP_STATE_GROWING	= 1;
const char GUILD_DEVELOP_STATE_MANHOOD	= 2;
const char GUILD_DEVELOP_STATE_BREAK	= 3;
// --sammy


enum {GUILD_ALLIES_MAX = 2};

const short GUILD_COMMAND_BASE				= 10;
const short GUILD_COMMAND_CREATE			= GUILD_COMMAND_BASE+1;
const short GUILD_COMMAND_DISMISS			= GUILD_COMMAND_BASE+2;
const short GUILD_COMMAND_MEMBER_LIST		= GUILD_COMMAND_BASE+3;
const short GUILD_COMMAND_MEMBER_INVITE		= GUILD_COMMAND_BASE+4;
const short GUILD_COMMAND_MEMBER_JOIN		= GUILD_COMMAND_BASE+5;
const short GUILD_COMMAND_MEMBER_LEAVE		= GUILD_COMMAND_BASE+6;
const short GUILD_COMMAND_MEMBER_LEAVE_SELF	= GUILD_COMMAND_BASE+7;
const short GUILD_COMMAND_MEMBER_ADD		= GUILD_COMMAND_BASE+8;
//const short GUILD_COMMAND_MEMBER_DEL		= GUILD_COMMAND_BASE+9;
const short GUILD_COMMAND_CREATE_TEST		= GUILD_COMMAND_BASE+10;
const short GUILD_COMMAND_BULLETIN_SET		= GUILD_COMMAND_BASE+11;
const short GUILD_COMMAND_MEMBER_JOIN_GM	= GUILD_COMMAND_BASE+12;
const short GUILD_COMMAND_INITIAL			= GUILD_COMMAND_BASE+13;
const short GUILD_COMMAND_PROTECT_UPDATE	= GUILD_COMMAND_BASE+14;

const short GUILD_COMMAND_MEMBER_KICKOUT	= GUILD_COMMAND_BASE+20;
const short GUILD_COMMAND_MEMBER_UPGRADE	= GUILD_COMMAND_BASE+21;
const short GUILD_COMMAND_MEMBER_DEGRADE	= GUILD_COMMAND_BASE+22;
const short GUILD_COMMAND_MEMBER_AUTHO_SET	= GUILD_COMMAND_BASE+23;
const short GUILD_COMMAND_MEMBER_STATE_CHANGE		= GUILD_COMMAND_BASE+24;
const short GUILD_COMMAND_MEMBER_PRESENT_CHANGE		= GUILD_COMMAND_BASE+25;
const short GUILD_COMMAND_MEMBER_CONTRIBUTE_CHANGE	= GUILD_COMMAND_BASE+26;

const short GUILD_COMMAND_CHAT			= GUILD_COMMAND_BASE+30;
const short GUILD_COMMAND_CHAT_OFFICER	= GUILD_COMMAND_BASE+31;

const short GUILD_COMMAND_AUTHEN_TEST	= GUILD_COMMAND_BASE+40;
const short GUILD_COMMAND_CHARGE_CHANGE	= GUILD_COMMAND_BASE+41;
const short GUILD_COMMAND_CHARGE_STATE	= GUILD_COMMAND_BASE+42;

// Guild store
const short GUILD_COMMAND_STORE_ITEM		= GUILD_COMMAND_BASE+50;
//const short GUILD_COMMAND_STORE_DEPOSITE	= GUILD_COMMAND_BASE+51;
//const short GUILD_COMMAND_STORE_FETCH		= GUILD_COMMAND_BASE+52;
const short GUILD_COMMAND_STORE_POSITION	= GUILD_COMMAND_BASE+54;
const short GUILD_COMMAND_STORE_REQUEST		= GUILD_COMMAND_BASE+55;
const short GUILD_COMMAND_STORE_LEFT		= GUILD_COMMAND_BASE+56;
const short GUILD_COMMAND_STORE_OUT			= GUILD_COMMAND_BASE+57;
const short GUILD_COMMAND_STORE_IN			= GUILD_COMMAND_BASE+58;

const short GUILD_COMMAND_RESOURCE_IN		= GUILD_COMMAND_BASE+80;
const short GUILD_COMMAND_RESOURCE_CHANGE	= GUILD_COMMAND_BASE+81;

const short GUILD_COMMAND_MSG_VALUE_CHANGE		  = GUILD_COMMAND_BASE+100;
const short GUILD_COMMAND_MSG_VALUE_CHANGE_SINGLE = GUILD_COMMAND_BASE+101;

const short GUILD_COMMAND_ALLY_REQ			= GUILD_COMMAND_BASE+120;
const short GUILD_COMMAND_ALLY_REQ_RES		= GUILD_COMMAND_BASE+121;
const short GUILD_COMMAND_ALLY_REPLY		= GUILD_COMMAND_BASE+122;
const short GUILD_COMMAND_ALLY_DISSOLUTION	= GUILD_COMMAND_BASE+123;
const short GUILD_COMMAND_ALLY_UPATE		= GUILD_COMMAND_BASE+124;

const short GM_COMMAND_GUILD_WAR_LIST		= GUILD_COMMAND_BASE+150;
const short GM_COMMAND_GUILD_WAR_DEC_LIST	= GUILD_COMMAND_BASE+151;

// GS used guild command
const short GUILD_COMMAND_NOTIFY_GS		= GUILD_COMMAND_BASE+200;
const short GUILD_COMMAND_STONE_CREATE	= GUILD_COMMAND_BASE+201;
const short GUILD_COMMAND_STONE_DELETE	= GUILD_COMMAND_BASE+202;
const short GUILD_COMMAND_STONE_INITIAL	= GUILD_COMMAND_BASE+203;
const short GUILD_COMMAND_NOTIFY_ROUND	= GUILD_COMMAND_BASE+204;
const short GUILD_COMMAND_BUILDING_INITIAL	= GUILD_COMMAND_BASE+205;
const short GUILD_COMMAND_BUILDING_NEW		= GUILD_COMMAND_BASE+206;	// Notify to GS
const short GUILD_COMMAND_BUILDING_REPAIR	= GUILD_COMMAND_BASE+207;	// Notify to GS

// Guild application
const short GUILD_APPLICATION_ALL_GUILD_REQ	= GUILD_COMMAND_BASE+300;	// Request all guild info
const short GUILD_APPLICATION_INITIAL		= GUILD_COMMAND_BASE+301;	// Request a guild's application
const short GUILD_APPLICATION_LEFT			= GUILD_COMMAND_BASE+302;	// The guild's officer stop get applications
const short GUILD_APPLICATION_REQ			= GUILD_COMMAND_BASE+303;
const short GUILD_APPLICATION_CONCENT		= GUILD_COMMAND_BASE+304;
const short GUILD_APPLICATION_REFUSE		= GUILD_COMMAND_BASE+305;
const short GUILD_APPLICATION_REQ_RES		= GUILD_COMMAND_BASE+306;

// Guild building
const short GUILD_COMMAND_CASTLE_COMEIN			   = GUILD_COMMAND_BASE+400;
const short GUILD_COMMAND_CASTLE_LEFT			   = GUILD_COMMAND_BASE+401;
const short GUILD_COMMAND_BUILDING_LEVEL_START	   = GUILD_COMMAND_BASE+402;
const short GUILD_COMMAND_BUILDING_LEVEL_END	   = GUILD_COMMAND_BASE+403;
const short GUILD_COMMAND_BUILDING_LEVEL_CANCEL	   = GUILD_COMMAND_BASE+404;
const short GUILD_COMMAND_BUILDING_LEVEL_DEGRADE   = GUILD_COMMAND_BASE+405;
// sammy--
const short GUILD_COMMAND_GUILD_GROWUP             = GUILD_COMMAND_BASE+406;
const short GUILD_COMMAND_ADD_GUILD_STONE          = GUILD_COMMAND_BASE+407;
const short GUILD_COMMAND_GUILD_MOVE               = GUILD_COMMAND_BASE+408;
const short GUILD_COMMAND_DELETE_GUILD             = GUILD_COMMAND_BASE+409;
// --sammy

const short GUILD_COMMAND_BUILDING_UPGRADE_EXP		= GUILD_COMMAND_BASE+410;
const short GUILD_COMMAND_BUILDING_UPGRADE_EXP_TEMP	= GUILD_COMMAND_BASE+411;


// sammy--
const short GUILD_COMMAND_GUILD_BAR_USE        		= GUILD_COMMAND_BASE+415;
const short GUILD_COMMAND_WAR_SELF_EVADE        	= GUILD_COMMAND_BASE+416;
const short GUILD_COMMAND_WAR_ENEMY_EVADE        	= GUILD_COMMAND_BASE+417;
const short GUILD_COMMAND_GUILD_REPAIR 		        = GUILD_COMMAND_BASE+418;
const short GUILD_COMMAND_GUILD_STATE_GROWING 		= GUILD_COMMAND_BASE+419;
const short GUILD_COMMAND_GUILD_STATE_BREAK 		= GUILD_COMMAND_BASE+496;
const short GUILD_COMMAND_ENEMY_STATE_BREAK 	        = GUILD_COMMAND_BASE+497;
// --sammy


const short GUILD_COMMAND_CREATURE_BUY		= GUILD_COMMAND_BASE+420;
const short GUILD_COMMAND_CREATURE_BORN		= GUILD_COMMAND_BASE+421;
const short GUILD_COMMAND_FORGESHOP_COMPOSE	= GUILD_COMMAND_BASE+440;
const short GUILD_COMMAND_FORGESHOP_BUY		= GUILD_COMMAND_BASE+441;

const short GUILD_COMMAND_WAR_DECLARE		= GUILD_COMMAND_BASE+480;
const short GUILD_COMMAND_WAR_DECLARE_RES	= GUILD_COMMAND_BASE+481;
const short GUILD_COMMAND_ENEMY_DECLARE		= GUILD_COMMAND_BASE+482;
const short GUILD_COMMAND_ENEMY_DECLARE_RES	= GUILD_COMMAND_BASE+483;
const short GUILD_COMMAND_WAR_CANCEL		= GUILD_COMMAND_BASE+484;	// �ж�״̬
const short GUILD_COMMAND_WAR_WIN			= GUILD_COMMAND_BASE+485;	// �ж�״̬
const short GUILD_COMMAND_WAR_MONEY_CONFIRM	= GUILD_COMMAND_BASE+490;
const short GUILD_COMMAND_WAR_MONEY_LOST	= GUILD_COMMAND_BASE+491;
const short GUILD_COMMAND_WAR_MONEY_GET		= GUILD_COMMAND_BASE+492;
const short GUILD_COMMAND_WAR_PROTECT		= GUILD_COMMAND_BASE+493;
const short GUILD_COMMAND_WINWAR_TROPHY		= GUILD_COMMAND_BASE+494;  // sammy


const short GUILD_COMMAND_INTOGUILD			= GUILD_COMMAND_BASE+501;//���빫��
const short GUILD_COMMAND_OUTGUILD			= GUILD_COMMAND_BASE+502;//�뿪����
const short GUILD_COMMAND_UPDATA_ENEMY_SELF	= GUILD_COMMAND_BASE+503;//���µжԹ���
const short GUILD_COMMAND_UPDATA_ENEMY_ALLY	= GUILD_COMMAND_BASE+504;

const short GUILD_COMMAND_GS_CREATURE_ADD		= GUILD_COMMAND_BASE+550;	// 
const short GUILD_COMMAND_GS_CREATURE_DEAD		= GUILD_COMMAND_BASE+551;	// 
const short GUILD_COMMAND_GS_WAR_STATE			= GUILD_COMMAND_BASE+552;	// �ж�״̬
const short GUILD_COMMAND_GS_WAR_END			= GUILD_COMMAND_BASE+553;	// �ж�״̬
const short GUILD_COMMAND_GS_WAR_START			= GUILD_COMMAND_BASE+554;	// �ж�״̬
const short GUILD_COMMAND_GS_WAR_END_LOGIN		= GUILD_COMMAND_BASE+555;	// �ж�״̬

const short GUILD_COMMAND_SKILL_USED		= GUILD_COMMAND_BASE+570;	// �ж�״̬


const int CONST_UNION_VALUE_COUNT = 4;	//��������ĸ���
const int CONST_UNION_BUILDING_COUNT = 10;
const int CONST_UNION_BUILDING_MAX_LEVEL = 3;

const int CONST_UNION_BUILDING_MAX_EXP = 10000;		//�����������ֵ

// Guild building
const char GUILD_B_GUILD		= 0;		// ����
const char GUILD_B_TAVERN		= 1;		// �ƹ�		
const char GUILD_B_FORGESHOP	= 2;		// ������
const char GUILD_B_STORE		= 3;		// �ֿ�
const char GUILD_B_FORT			= 4;		// ����
const char GUILD_B_DEPOT		= 5;		// ����վ
const char GUILD_B_BARACKS		= 6;		// ��Ӫ
const char GUILD_B_WONDER		= 7;		// �漣
const char GUILD_B_PARLIAMENT	= 8;		// �����
const char GUILD_B_MAGICTOWER	= 9;		// ħ����
const char GUILD_B_NUM			= 10;		// 

// Resource
const char RESOURCE_MONEY		= 0;		// money....
const char RESOURCE_STONE		= 1;		// ʯͷ
const char RESOURCE_WOOD		= 2;		// ľͷ
const char RESOURCE_SULFUR		= 3;		// ���
const char RESOURCE_SILVER		= 4;		// ˮ��
const char RESOURCE_CRYSTAL		= 5;		// ˮ��
const char RESOURCE_MAX			= 6;		//

const char GUILD_SOIDIER_TYPE_COUNT = 6;


//�ʼ�ϵͳ �Ǻ�

const char MAIL_ITEM_SEND       = 0;		//�����ʼ�
const char MAIL_ITEM_GETLIST    = 1;		//ȡ���ҵ��ʼ��б�
const char MAIL_ITEM_GETMAIL    = 2;		//��ȡһ���ʼ�
const char MAIL_ITEM_DELMAIL	= 3;		//ɾ��һ���ʼ�	�����Ѿ������������˲���
const char MAIL_ITEM_APPEND     = 4;		//�����ȥһ���ʼ���������ݿ����滹�� ������� 
const char MAIL_ITEM_DETAIL     = 5;		//��ҿ�һ���ʼ� 
const char MAIL_ITEM_GETITEM	= 6;		//����һ������
const char MAIL_ITEM_DELETEMAIL = 7;
const char MAIL_ITEM_GETMONEY	= 8;		//ȡ��Ǯ
const char MAIL_ITEM_CLOSEMAIL  = 9;		//���߷��������´�����
//����ϵͳ����Ϣ
const char MAIL_PUBLICSELL_GETLIST  = 10;	//����������Ʒ���б�
const char MAIL_PUBLICSELL_SELLITEM = 11;	//��һ����Ʒ
const char MAIL_PUBLICSELL_BUYITEM  = 12;	//����һ����Ʒ
const char MAIL_PUBLICSELL_BUYITEMONE = 13;	//һ�ڼ���
const char MAIL_PUBLICSELL_VIPBUY	= 14;	//VIP����
const char MAIL_PUBLICSELL_MYITEMLIST = 15;	//�ҵ�VIP����
const char MAIL_PUBLICSELL_GETBACK = 16;	//�û��ҵ�������Ʒ

const char MAIL_NOTIFY_CHAR = 17;			//��������ͻ��˷���һ�� ��Ϣ

const int MAX_PUBLICSELL_RESULT_COUNT = 10;	//һ�����20�� ���˷Ѿ�

const char PUBLICSELL_ERROR_MONEY = 1;		//�����˵���Ǯ����
const char PUBLICSELL_ERROR_LOWPRICE = 2;	//���۵����ּ�
const char PUBLICSELL_ERROR_NOTFIND = 3;	//��Ʒû���ҵ�
const char PUBLICSELL_ERROR_OTHER = 4;		//��������
const char PUBLICSELL_ERROR_SELLMYFULL = 5;	//�Լ��Ķ���̫����
const char PUBLICSELL_ERROR_SELLINDEXFULL = 6;	//index full

//����ϵͳ �Ǻ�
const char PUBLICSELL_SEARCH_BYROLE = 0;	//���������˲�ѯ
const char PUBLICSELL_SEARCH_BYTYPE = 1;	//���յ������Ͳ�ѯ
const char PUBLICSELL_SEARCH_BYQLV  = 2;		//���յ���Ʒ��
const char PUBLICSELL_SEARCH_BYLEVEL = 3;	//���յ���ʹ�õȼ�
const char PUBLICSELL_SEARCH_BYTYPEID = 4;	//���յ�������id��ѯ

const char PUBLICSELL_TYPE_ALL = 0;
const char PUBLICSELL_TYPE_MY = 1;

const long MAIL_READ_PROTECT_TIME = 20000;	//��ȡ�ʼ����

const int MAX_MAIL_COUNT = 10;				//��������ȡ�ʼ�������




//���ϵͳ �Ǻ�

const char MARRY_REQUEST	= 1;		//�������
const char MARRY_ALLOW		= 2;		//ͬ������
const char MARRY_REFUSE		= 3;		//��鱻�ܾ���

const char MARRY_SUCESS		= 4;		//˭��˭���ɹ�
const char MARRY_FAIL		= 5;		//���ʧ����



const char MARRY_UPCHE		= 41;		//����ϳ�
const char MARRY_DOWNCHE	= 42;		//����³�
const char MARRY_CHEWALK	= 43;		//��鳵����·

const char MARRY_SONG_CAILI	= 44;		//��黻����
const char MARRY_HUAN_CAILI	= 45;		//����Ͳ���

const char MARRY_CHANGE_SCENE	= 46;		//����л�����

const char MARRY_CHECKOK		= 50;		//������ǰ��
const char MARRY_NO_RING		= 51;		//û�н��ǰ�����
const char MARRY_NO_LEVEL		= 52;		//
const char MARRY_NO_MONEY		= 53;		//
const char MARRY_MARRYED		= 54;		//�Ѿ��а���
const char MARRY_SEX_ERROR		= 55;		//�Ա���ͬ
//const char MARRY_REFUSE		= 53;		//��鱻�ܾ���

const char MARRY_PARAM_ERROR = -2;	//��������	
const char MARRY_NOTONLINE = -1;		//û���ҵ�����




	


/*���߳���ı�־*/
const int COMBIN_ERROR_NOERROR = 0;		//û�г���
const int COMBIN_ERROR_NOERROR_EXP =  1;
const int COMBIN_ERROR_PRODUCTID_ERROR = 2; //Ҫ�ϳɲ��ںϳ��б��еĵ���
const int COMBIN_ERROR_NOPEIFANG = 3;		//û���䷽
const int COMBIN_ERROR_TABLE = 4;			//�䷽���д���
const int COMBIN_ERROR_NOTPLAYER = 5;		//����Ҫ�ϳɵ���
const int COMBIN_ERROR_NOPACK = 6;			//û�а���
const int COMBIN_ERROR_NOTENOUGH_RES = 7;	//û���㹻�Ĳ���
const int COMBIN_ERROR_NOTENOUGH_SPACE = 8;	//û���㹻�Ŀո�
const int COMBIN_ERROR_SKILL_NOTENOUGH = 9;
const int COMBIN_ERROR_ERROR_UNKNOW = 10;

const int FJ_NO_ERROR			= 0;		//�ֽ�ɹ�
const int FJ_ERROR_NO_PACKET = 1;			//û�а���
const int FJ_ERROR_NOTFIND  = 2;			//û�е���
const int FJ_ERROR_CANFJ	= 3;			//���ǿ��Էֽ�ĵ���
const int FJ_ERROR_TABLE_ERROR = 4;			//�ֽ�����
const int FJ_ERROR_FULL			= 5;		//�Ų�����
const int FJ_ERROR_SHORTMONEY   = 6;		//Ǯ����
const int FJ_ERROR_TOOFASE = 7;				//�ֽ��̫����


const int SP_ERROR_NOERROR = 0;
const int SP_ERROR_NOCHIP = 1;				//����û���ҵ�
const int SP_ERROR_SKILL = 2;				//���ܲ���
const int SP_ERROR_NOPACK = 3;				//û�а���
const int SP_ERROR_NOTARGET = 4;			//�������󲻴���
const int SP_ERROR_TARGETERROR = 5;			//���ܸ�������
const int SP_ERROR_ATTRFULL = 6;			//��������
const int SP_ERROR_NORES = 7;				//û�и�������
const int SP_ERROR_NOTENOUGHMONEY = 8;		//��Ǯ����
const int SP_ERROR_TABLEERROR = 9;			//���������ݴ���
const int SP_ERROR_NOSTONE = 10;			//û��ʯͷ

const int SP_ERROR_FAIL_PROTECTED = 11;
const int SP_ERROR_FAIL_NOPROTECTED = 12;
const int SP_ERROR_SUCCESS = 13;

const int SP_ERROR_EXT_STONE = 14;				//�ֽ�85���ⱦʯ

enum EPhyleType
{
	EPhyle_NULL				= 0,	    // ����
	EPhyle_TIANCHAO			= 1,		//�쳯
	EPhyle_DIGUO			= 2,		//�۹�
	EPhyle_MOZU				= 3,		//ħ��
	
	
	EPhyle_MAX				= 4,
	
};


const char INTO_HOUSE		= 1;			// ���뷿��
const char LEAVE_HOUSE		= 2;			// �뿪����
const char ADD_FURNITURE	= 3;			// ��ӼҾ�
const char DELETE_FURNITURE = 4;			// ɾ���Ҿ�
const char MY_HOUSE_LIST	= 5;			//�����������ҵķ����б�		
const char HOUSE_GETHOUSE   = 6;			//�ⷿ��
const char HOUSE_CHANGEFLOOR = 7;			//�����ذ�
const char HOUSE_PUTFURNITURE = 8;			//���üҾ�
const char HOUSE_MOVEFURNITURE = 9;			//��λ��
const char HOUSE_GETFURBACK = 10;			//�ѼҾ�

const char HOUSE_CANIIN = 11;				//����Ƿ���Խ�ȥ
const char HOUSE_UPDATE_FUR = 12;			//���¼Ҿ���
const char HOUSE_USE_FUR = 13;				//ʹ�üҾ�
const char HOUSE_GETOLD_FUR = 14;			//��ȡ�Ҿ��б�
const char HOUSE_GETOLDFURBACK = 15;		//ȡ�ؼҾ�
const char WARMANAGE_SEND = 16;				//��ս����
const char HOUSE_BACKHOME = 17;
const char FRIEND_GOTO_QUERY = 18;			//�ɵ���������ȥ ��MAPSERVERҪ����
const char FRIEND_GOTO = 19;			
const char FRIEND_GOTO_ERROR = 20;
const char FRIEND_SUMMER = 21;				//�ٻ����ѹ���
const char FRIEND_SUMMER_REQ = 22;			//ѯ�������Ƿ�Ը��ɹ���
const char FRIEND_SUMMER_ERROR = 23;
const char FRIEND_SUMMER_REFUSE = 24;		//���ܾ���
const char FRIEND_SUMMERGOTO = 25;
const char FRIEND_SUMMERGOTO_QUERY = 26;
const char MSGFROM_MAPSERVER = 27;			//MAP SERVER ��������Ϣ
const char MAPSERVER_EVENT = 28;			//������ƭ MAP_SERVER



const char FUR_UPDATE_TYPE_ADD = 1;
const char FUR_UPDATE_TYPE_DEL = 2;
const char FUR_UPDATE_TYPE_MOV = 3;
const char FUR_UPDATE_TYPE_LOCK = 4;	//����
const char FUR_UPDATE_TYPE_OPEN = 5;

const char L2R_HOUSE_GET_HOUSE = 1;			//LOGIN SERVER��MAP_SERVER���͵� �����ݵ� ����
const char L2R_HOUSE_PUTFUR = 2;			//�żҾ� �Ǻ�
const char L2R_HOUSE_GETFUR = 3;			//�ѼҾ߷Żذ���
const char L2R_HOUSE_USEFUR = 4;			//ʹ�üҾ�
const char L2R_HOUSE_GETOLDFUR = 5;
const char L2R_HOUSE_WORLDEDITSAY = 6;		//�����ɰ�
const char L2R_HOUSE_BACKHOME = 7;			//�ؼ�

const char HOUSECANIN_EMPTY = 0;			//�շ���
const char HOUSECANIN_OTHER = 1;			//�����˵ķ��䲻�ܽ���
const char HOUSECANIN_MY = 2;				//�ҵķ���
const char HOUSECANIN_PEIOU = 3;			//��ż
const char HOUSECANIN_GUILD = 4;			//�����Ա
const char HOUSECANIN_FRIEND = 5;			//�����ѵķ���


const long HOUSE_GET_TIME = 1000;//3600*24*3;		//�ⷿ�ӵ�ʱ�� ��λ��


const char HOUSE_ERROR_GET_NOTEMPTY = 1;	//���Ӳ��ǿյĲ�����
const char HOUSE_ERROR_GET_GOLDERROR = 2;	//�׽�Ҳ���
const char HOUSE_ERROR_GET_MONEYERROR = 3;	//��Ϸ�Ҳ���
const char HOUSE_ERROR_GET_DATABASE = 4;	//���ݿ����
const char HOUSE_ERROR_GET_NOHOUSE = 5;		//���Ӳ�����
const char HOUSE_ERROR_GET_PROTECTED = 6;	//���ӱ�����������
const char HOUSE_ERROR_GET_OWNERERROR = 7;	//���˴���
const char HOUSE_ERROR_GET_BAGFULL = 8;		//���������޷����յ���
const char HOUSE_ERROR_GET_NOHOST = 9;		//�����Ҳ���
const char HOUSE_ERROR_GET_BAGERROR = 10;	//����������
const char HOUSE_ERROR_FUR_COLDDOWN = 11;	//�Ҿ���colddown
const char HOUSE_ERROR_FUR_NOTFIND = 12;	//�Ҿ��Ҳ���
const char HOUSE_ERROR_FUR_END = 13;		//�Ҿ��;�Ϊ0


const char HOUSE_LUA_EXEC_HOST = 0;	//����ʹ�üҾ�
const char HOUSE_LUA_EXEC_LOVER = 1; //��żʹ�üҾ�
const char HOUSE_LUA_EXEC_FRIEND = 2; //����ʹ�üҾ�
const char HOUSE_LUA_EXEC_GUILD = 3;	//ͬ�����ʹ�üҾ�
const char HOUSE_LUA_EXEC_ENEMY = 4;	//����ʹ�üҾ�
const char HOUSE_LUA_EXEC_OTHER = 127;	//������


const int HOUSE_FUR_MAX_LEVEL1 = 10;
const int HOUSE_FUR_MAX_LEVEL2 = 20;
const int HOUSE_FUR_MAX_LEVEL3 = 30;
const int HOUSE_FUR_MAX_LEVEL4 = 40; 


const char PK_STATE_NONE = 0;				//û��PK״̬
const char PK_STATE_DEFEND = 1;				//����PK
const char PK_STATE_NORMAL		= 2;		//ֻ��PK״̬ 
const char PK_STATE_ATTACKED	= 3;		//����PK	ɱ������ ���������	//״̬����


const long PK_TIME = 200000;				//���Ա�ɱ��״̬����ʱ��
const long PK_NOKILL_TIME = 100000;			//�����pk����ʱ��


const int IS_PK_TRUE_NOPK = 0; //����pk
const int IS_PK_KILL_PK	= 1;	//�����ֵ��PK
const int IS_PK_NOKILL_PK = 2;	//����PK	


//-----------gamelog-----------//
const short GAMELOG_ALL				= 0;	// ȫ��
const short GAMELOG_GM				= 1;	//gmˣ����
const short GAMELOG_BUY				= 2;	//��
const short GAMELOG_SELL			= 3;	//��
const short GAMELOG_EXCHANGE		= 4;	//����
const short GAMELOG_EXCHANGE_MONEY	= 5;	//���׽�Ǯ��ʾ��ǰ���id�������id
const short GAMELOG_EXCHANGE_ERROR	= 6;	//��������ʧ��,һ�㲻�����
const short GAMELOG_DROP			= 7;	//����
const short GAMELOG_DEADDROP		= 8;	//��������
const short GAMELOG_RANFA			= 9;	//Ⱦ��
const short GAMELOG_XISHOUSTONE		= 10;	//��������ʯ
const short GAMELOG_CHENGZHANG_START		= 11;	//��ʼ�ɳ����ߣ�
const short GAMELOG_CHENGZHANG				= 12;	//�ɳ����ߣ�
const short GAMELOG_CHENGZHANG_ENDOK		= 13;	//��ɳɳ����ߣ��ɹ�
const short GAMELOG_CHENGZHANG_ENDSHIBAI	= 14;	//��ɳɳ����ߣ�ʧ��
const short GAMELOG_CHENGZHANG_ENDXIAOSHI	= 15;	//��ɳɳ����ߣ�ʧ�ܲ���ʧ
const short GAMELOG_UNIONDEAD	= 16;	//���ᱻ�����,myid��creid���
const short GAMELOG_FENJIE_ITEM = 17;	//���߷ֽ�
const short GAMELOG_FUMO_ITEM_SUCCESS_PROTECTED = 18;		//���߸�ħ�ɹ� �������˱���ʯ
const short GAMELOG_FUMO_ITEM_SUCCESS_NOPROTECTED = 19;		//���߸�ħ�ɹ� û�������˱���ʯ
const short GAMELOG_FUMO_ITEM_FAILPROTECTED = 20;		//���߸�ħʧ�� �����˱���ʯ ���Ա���
const short GAMELOG_FUMO_ITEM_FAILNOPROTECTED = 21;		//���߸�ħʧ�� û�б���ʯ ����û����
const short GAMELOG_COMBIN_ITEM = 22;	//���ߺϳ�
const short GAMELOG_GUILD = 23;	//������־
const short GAMELOG_EXCHANGE_CHEAT	= 24;			//������ƭ��
const short GAMELOG_OLDFER_GETBACK = 25;			//�ûؾɼҾ�
const short GAMELOG_GETFUR_BACK = 26;				//�ûؼҾ�
const short GAMELOG_GETITEM = 27;					//����������
const short GAMELOG_SCRIPTITEM = 28;				//�ű����
const short GAMELOG_MAIL_TAKEMONEY = 29;			//��ȡ�ʼ��е�Ǯ
const short GAMELOG_MAIL_TAKEITEM = 30;				//��ȡ�ʼ��еĵ���
const short GAMELOG_MAIL_SENDMONEY = 31;			//�ʼ�Ǯ
const short GAMELOG_MAIL_SENDITEM = 32;				//�ʼĵ���
const short GAMELOG_MAIL_DELETEMAIL = 33;			//ɾ�����ʼ�
const short GAMELOG_MAIL_YUEGUANG = 34;				//�¹ⱦ��
const short GAMELOG_MAIL_YUEGUANG_RESEED = 35;				//�¹ⱦ��
const short GAMELOG_PUBLICSELL_SELL = 36;			//����
const short GAMELOG_PETEGG_UP = 37;			//���ﵰ����
const short GAMELOG_FANGJU_UP = 38;			//ǿ������
const short GAMELOG_LIFE_UP	  = 39;			//����ȼ��
const short GAMELOG_GET_LIPIN	  = 40;			//����Ʒ
const short GAMELOG_JIONTIANSHEN  = 41;			//�ϳ�����
const short GAMELOG_SCRIPT	= 43;	//�ű�log
const short GAMELOG_STAR_UP = 44;			//����
const short GAMELOG_BREAK_SOUL = 45;			//���ֽ�
const short GAMELOG_RESORT_OTHER_ATTR = 46;		//������������f
const short GAMELOG_A_to_B = 47;		//��ƷAtoB
const short GAMELOG_VIPBUY		= 100;	//vip��������
const short GAMELOG_VIPBUYCOUNT	= 101;	//vip���ѵ�
const short GAMELOG_VIPBUYCOUNT_BUYITEM	= 102;	//vip���ѵ�����
const short GAMELOG_CHENGZHANG_SHENQI_START			= 103;	//��ʼ�ɳ����ߣ��������
const short GAMELOG_CHENGZHANG_SHENQI				= 104;	//�ɳ����ߣ�
const short GAMELOG_CHENGZHANG_SHENQI_ENDOK			= 105;	//��ɳɳ����ߣ��ɹ�
const short GAMELOG_CHENGZHANG_SHENQI_ENDSHIBAI		= 106;	//��ɳɳ����ߣ�ʧ��
const short GAMELOG_CHENGZHANG_SHENQI_ENDXIAOSHI	= 107;	//��ɳɳ����ߣ�ʧ�ܲ���ʧ
//�������ֵ������ɹ�����ʧ��
const char VIPBUY_OK			= 1;	//�ɹ�����VIP�ɹ�
const char VIPBUY_ERROR_DB		= 2;	//�������ݿ�ʧ��
const char VIPBUY_ERROR_GETITEM		= 3;	//���ɵ���ʧ��
const char VIPBUY_ERROR_NOMENOY		= 4;	//Ǯ����
const char VIPBUY_ERROR_ADDITEM		= 5;	//�������ʧ��

const char VIPBUY_UPDATA_MENOY		= 10;	//����Ǯ
const char VIPBUY_UPDATA_VIPBUYCOUNT = 11; //�������ѵ�


//---------s2l--even----//
const char CSL_GOMYROUND		= 1;	//��������
const char CSL_KICKOUT			= 2;	//�ߵ����
const char CSL_USEMENOY			= 3;	//��Ǯ
const char CSL_USEITEM			= 4;	//�õ���
const char CSL_NABA				= 5;	//������ �Ǻ�
const char CSL_STOP				= 6;	//stop
const char CSL_NABA_SYSTEM		= 7;	//ϵͳר������
const char CSL_CHANGETYPE		= 8;	//����

const char CSL_USER_CHENGMI_TISHI		= 17;	//��ʾ

const char CSL_DROPITEM			= 21;	//��ʧ���߱���


const char CSL_CHECK_MIBAO			= 30;	//�����ܱ�//�ͻ�����������
const char CSL_CHECK_MIBAO_OK		= 31;	//�����ܱ�//�ͻ�����������
const char CSL_CHECK_MIBAO_ERROR	= 32;	//�����ܱ�//�ͻ�����������
const char CSL_CHECK_MIBAO_GM		= 33;	//gm�����ܱ�//�ͻ�����������
const char CSL_CHECK_MATRIX			= 34;	//��������//�ͻ�����������
const char CSL_CHECK_MATRIX_ERROR	= 35;	//��������//�ͻ�����������

const char CSL_REAL_GET_PASSWORD	= 36;	//��ȡrealƽ̨���ʺ���Ϣ����Ϊ����

const char CSL_WENDAN_START		= 41;	//�ʴ�ʼ
const char CSL_WENDAN_INFO		= 42;	//�ʴ���Ϣ
const char CSL_WENDAN_RIGHT		= 43;	//�ʴ���ȷ
const char CSL_WENDAN_ERROR		= 44;	//�ʴ����
const char CSL_WENDAN_END		= 45;	//�ʴ����
const char CSL_WENDAN_HUIDA		= 46;	//�ʴ�-�ͻ��˻ش�
const char CSL_WENDAN_MAXNUM	= 47;	//�ʴ�-����һ��Ĵ�����
  
const char CSL_SYS_WENDAN_REQUIRE_END=48;  //���Ҫ���˳�ϵͳ�ʴ�






const char CSL_SYS_WENDAN_READY     =91;  //ϵͳ�ʴ���������ҷ���׼����Ϣ
const char CSL_SYS_WENDAN_START		= 92;	//ϵͳ�ʴ�ʼ
const char CSL_SYS_WENDAN_INFO		= 93;	//ϵͳ�ʴ���Ϣ
const char CSL_SYS_WENDAN_RIGHT		= 94;	//ϵͳ�ʴ���ȷ
const char CSL_SYS_WENDAN_WRONG		= 95;	//ϵͳ�ʴ����
const char CSL_SYS_WENDAN_END		= 96;	//ϵͳ�ʴ����
const char CSL_SYS_WENDAN_HUIDA		= 97;	//ϵͳ�ʴ�-�ͻ��˻ش�
const char CSL_SYS_WENDAN_MAXNUM	= 98;	//ϵͳ�ʴ�-����һ��Ĵ�����
const char CSL_SYS_WENDAN_ENDBACK	= 99;	//ϵͳ�ʴ����

const char CSL_SYS_WUQI_RESORT_OTHERATTR	= 100;	//rand otherattr

//���سɹ�����ʧ��
//const char CSL_CHECK_DIANZIKA	= 31;	//Ԥ�����ӿ�

const char CSL_STORAGE_PWD_OPEN			= 50;	//�����ֿ�����
const char CSL_STORAGE_PWD_OPENOK		= 51;	//�����ֿ�����ok
const char CSL_STORAGE_PWD_OPENERROR	= 52;	//�����ֿ�����error
const char CSL_STORAGE_PWD_SET			= 53;	//���òֿ�����
const char CSL_STORAGE_PWD_SETOK		= 54;	//���òֿ�����ok
const char CSL_STORAGE_PWD_SETERROR		= 55;	//���òֿ�����error

const char CSL_LOOK_LIPIN		=56;  //�쿴��Ʒ
const char CSL_LOOK_NOLIPIN		=57;  //û����Ʒ
const char CSL_LOOK_LIPININFO	=58;  //��Ʒ��Ϣ
const char CSL_LOOK_GETLIPIN	=59;  //�õ���Ʒ



const char CSL_PANGUO					= 60;	//�ѹ�

const char CSL_OTHER_TASK				= 61;	//�������



const char CSL_HITEGG_START			= 63;	//�ҵ���ʼ
const char CSL_HITEGG_END			= 64;	//�ҵ�����
const char CSL_HITEGG_INFO			= 65;	//�ҵ�������Ϣ//��ʾ�ɹ���
const char CSL_HITEGG_NOEMPTY		= 66;	//�ҵ�����û�п�λ��
const char CSL_HITEGG_HIT			= 67;	//�ҵ�
const char CSL_HITEGG_HIT_SHIBAI	= 68;	//�ҵ�ʧ��

//------�ض������Ӽ�----//
const char CSL_TASK_QQ				= 1;	//qq����
const int CSL_TASK_MAX				= 2;	//
//


//�ҵ� ������
const char CSL_EGGKICK_REQUIRE    =127 ;   //�����ҵ�
const char CSL_EGGKICK_WINORLOSE  =126 ;  //�ҵ� Ӯ �� ��
const char CSL_EGGKICK_GETREWARD  =125 ; //�ҵ� �ý�Ʒ
//�ҵ� ������

const char CSL_WALLOW0                  = 70;
const char CSL_WALLOW1			        = 71;	// sammy ������ ��3Hour-5H��
const char CSL_WALLOW2			        = 72;	// sammy ������  ��>5H��


const char CSL_GUESS_ANSWER             =76;     //��ȡ��ȭϵͳ�Ĵ���Ϣ ������

//const char GUESS_ANSWER_STONE           =1;     //ʯͷ
//const char GUESS_ANSWER_STONE           =1;     //����
//const char GUESS_ANSWER_STONE           =1;     //��


const char CSL_GUOZHAN			= 80;	// ��ս
const char CSL_GUOZHAN_END		= 81;	// ��ս����

const char CSL_LIHUN			= 90;	//���

const char CSL_WAIGUA			= 100;	//����ң��Լ�����
const char CSL_WAIGUA1			= 101;	//����ң��Լ�����
const char CSL_WAIGUA2			= 102;	//����ң��Լ�����
const char CSL_WAIGUA3			= 103;	//����ң��Լ�����

const char CSL_CHAXUN_MOBI			= 111;	//��ѯʹ��
const char CSL_CHAXUN_ITEM			= 112;	//��ѯʹ��
const char CSL_CHECK_BKDB			= 113;	//��ⱸ��db�Ƿ�����
const char CSL_CHECK_LOGININ		= 114;	//

const char CHANGESCENE_NO_ITEM_MAP  = 115;	//��ͼ��������

const char CSL_EVEN_BIND_MAC		= -57;	//��MAC

const char BKDB_NOINI			= 1;	//û��ini�����ļ�
const char BKDB_NOWRITE			= 2;	//����д
const char BKDB_BIGINFO			= 3;	//��С��Ϣ

const long WG_BEGINSEE_ROLEID		= 28;
const long WG_ENDSEE_ROLEID			= 41;
const long WG_SKILL_ROLEID			= 37;
const long WG_TELEPORT_ROLEID		= 26;

const char WG_BEGINSEE		= 111;
const char WG_ENDSEE		= 112;
const char WG_SKILL			= 113;
const char WG_TELEPORT		= 114;
const char WG_PK_OPEN		= 120;
const char WG_PK_CLOSE		= 121;
const char WG_PUBLICSELL_OPEN = 122;
const char WG_PUBLICSELL_CLOSE = 123;
//g_pkOpened

// ��ʿ ��ʿ���ӳ� �о� �Ӿ� ���� ��� ���� �󹫾� �ܶ� Ԫ˧ ���ͳ˧
const char RANK_NULL		= 0;
const char RANK_QISHI		= 1;
const char RANK_QISHI_EX	= 2;
const char RANK_NANJUE		= 3;
const char RANK_ZHIJUE		= 4;
const char RANK_BOJUE		= 5;
const char RANK_HOUJUE		= 6;
const char RANK_GONGJUE		= 7;
const char RANK_DAGONGJUE	= 8;
const char RANK_ZONGDU		= 9;
const char RANK_YUANSHUAI		= 10;
const char RANK_ZUIGAOTONGSHUAI	= 11;
const char RANK_NUM				= 12;


const int PK_COLOR_YELLOW = 900;
const int PK_COLOR_RED = 2900;

//��֤
const short l2l_login				= 1001;
const short l2l_check				= 1002;

const long CONST_MAX_PSELLTIME = 3 * 3600;	//��������ʱ��
const long CONST_MAX_PSELLTIME_DOUBLE = 6 * 3600;

const short JIANYU_ID = 1501;

const long CONST_BACKHOME_COLDDOWN = 100000;	


const char PUBLICSELL_TIMETYPE_NORMAL = 0;
const char PUBLICSELL_TIMETYPE_DOUBLE = 1;
const char PUBLICSELL_TIMETYPE_DOUBLEDOUBLE = 2;	


const char PETFOOD_ERROE = 1 ;//��������
const char PETFOOD_BAO	= 2 ;//�����Ȳ���ι��
const char PETFOOD_ITEMTYPE	= 3 ;//ι�����ϲ�ƥ��
const char PETFOOD_ITEMNUM	= 4 ;//ι��������������

const char PETFOOD_RIDEERROR	= 5 ;//û���������ι��������

const char PETFOOD_OK	= 10 ;//ι���ɹ�
const char PETFOOD_ADDEXP	= 101 ;//ι��һ��ֻ�Ӿ���
const char PETFOOD_UP	= 102 ;//ι��һ��������
const char PETFOOD_UPOK	= 103 ;//ι��һ�α�ɳ�����
const char PETBODY_UPOK	= 104 ;//����������
const char PETFOOD_EXPUP	= 105 ;//ι����������

const char JILEI_EXP	= 110 ;//���۾���

enum EPingTaiType
{
	EPingTai_MWO			= 0,	    // ����Լ�
	EPingTai_TOM			= 1,		
	EPingTai_REAL			= 2,
	EPingTai_QQ				= 3,		//QQ
	EPingTai_HAOFANG		= 4,		//HAOFANG
	EPingTai_YOUYI			= 5,		//YOUYI
	EPingTai_17173			= 6,		//17173
	EPingTai_XUNLEI			= 7,		//Ѹ��
	EPingTai_EUHD			= 8,		//����
	EPingTai_MJ_WEISI		= 9,		//ά˼
	EPingTai_MJ_SHENGDA		= 10,		//ʢ�� add by coke 20090219
	EPingTai_MAX			= 11		//MAX
};

const short SCRIPT_CSL_ADDNPC		= 1;	//
const short SCRIPT_CSL_CHANGESCENE			= 2;	//
const short SCRIPT_CSL_DELETENPC			= 3;	//
const short SCRIPT_CSL_SETNPCSTATE			= 4;
//gbh�޸��ļ�mapserver
//scene_receive
//game_world

const int WENDA_TIME=30*1000;



const int LOGIN_LOG_IN			= 1;//
const int LOGIN_LOG_OUT			= 2;//
const int LOGIN_LOG_DELETE		= 3;//
const int LOGIN_LOG_CREATE		= 4;//

const short a2db_login				= 5001;
const short db2a_webeven			= 5088;
//�����˺�����
const int g_iDamage1 =-1000000;
const int g_iDamage2 =1000000;
#endif
