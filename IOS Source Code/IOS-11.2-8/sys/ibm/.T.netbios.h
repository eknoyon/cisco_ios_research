
netbios.h,2619
#define _NETBIOS_H_56,1982
#define NETBIOS_MAX_NAME_LEN 59,2081
#define NETBIOS_NAME_LENGTH_DEFAULT 60,2115
#define NETBIOS_MAX_NAME_ULONG 61,2156
#define NETBIOS_TOKEN_LLC2_CHECK 67,2314
#define NETBIOS_IPX_CHECK 69,2405
typedef struct netbios_acctype_ netbios_acctype_71,2436
} netbios_acctype;netbios_acctype79,2723
struct netbios_acclisttype_ netbios_acclisttype_81,2743
#define NETBIOS_DELIMITER_0 90,2878
#define NETBIOS_DELIMITER_1 91,2921
#define NETBIOS_SRC_VALUE 96,3063
#define NETBIOS_SRC_MASK 97,3096
#define NETBIOS_DEST_VALUE 100,3153
#define NETBIOS_DEST_MASK_1 101,3187
#define NETBIOS_DEST_MASK_2 102,3222
#define NETBIOS_ADD_GROUP_QUERY 104,3258
#define NETBIOS_ADD_NAME_QUERY 105,3297
#define NETBIOS_NAME_IN_CONFLICT 106,3335
#define NETBIOS_STATUS_QUERY 107,3375
#define NETBIOS_TERMINATE_TRACE_REM 108,3411
#define NETBIOS_DATAGRAM 109,3455
#define NETBIOS_DATAGRAM_BROADCAST 110,3487
#define NETBIOS_NAME_QUERY 111,3529
#define NETBIOS_ADD_NAME_RESPONSE 112,3563
#define NETBIOS_NAME_RECOGNIZED 113,3604
#define NETBIOS_STATUS_RESPONSE 114,3643
#define NETBIOS_TERMINATE_TRACE_REM_LOC 115,3682
#define NETBIOS_DATA_ACK 116,3730
#define NETBIOS_DATA_FIRST_MIDDLE 117,3762
#define NETBIOS_ONLY_LAST 118,3803
#define NETBIOS_SESSION_CONFIRM 119,3836
#define NETBIOS_SESSION_END 120,3875
#define NETBIOS_SESSION_INITIALIZE 121,3910
#define NETBIOS_NO_RECEIVE 122,3952
#define NETBIOS_RECEIVE_OUTSTANDING 123,3986
#define NETBIOS_RECEIVE_CONTINUE 124,4029
#define NETBIOS_SESSION_ALIVE 125,4069
#define NETBIOS_CORRELATOR_SIZE 127,4107
#define NETBIOS_NORMAL 132,4192
#define NETBIOS_HANGUP 133,4217
typedef struct netbios_header_ netbios_header_141,4507
} netbios_header;netbios_header151,5081
typedef struct netbios_header_sess_ netbios_header_sess_159,5359
} netbios_header_sess;netbios_header_sess169,5913
#define NETBIOS_HEADER_SIZE	172,5938
#define NETBIOS_HEADER_SESS_SIZE 173,5998
#define NETBIOS_HASH_LEN 178,6119
#define NETBIOS_HOLD_DOWN_TIME 179,6152
typedef struct netbios_name_cache_ netbios_name_cache_181,6194
} netbios_name_cache;netbios_name_cache196,6999
#define NETBIOS_DEFAULT_CACHE_TIMEOUT 198,7022
#define NETBIOS_DEFAULT_QUERY_TIMEOUT 199,7095
#define NETBIOS_DEFAULT_RECOGNIZED_TIMEOUT 200,7164
#define NETBIOS_NAME_MAGIC 201,7238
#define NETBIOS_NAME_QUEUE_MAX 202,7277
#define NETBIOS_NAME_QUEUE_MIN 203,7336
#define NETBIOS_NAME_NULL 205,7396
#define NETBIOS_NAME_AGED 206,7436
#define NETBIOS_NAME_AGED_REM 207,7492
#define NETBIOS_NAME_HANDCRAFT 208,7558
#define NETBIOS_NAME_HANDCRAFT_REM 209,7622
