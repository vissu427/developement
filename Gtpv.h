typedef struct GTPv2MessageName
{
unsigned char messageType;
char messagename[100];
}GTPv2MessageName;
typedef struct GTPv2Header
{
unsigned char version:3;
_Bool piggybackingFlag;
_Bool tEIDpresence;
char messageType;
uint8_t messagelength;
uint16_t sequencenumber;
char spare;
}GTPv2Header;
typedef struct GTPv2IEheader
{
unsigned char type;
unsigned short length;
unsigned char spare:4;
unsigned char instance:4;
}GTPv2IEheader;
typedef struct
{
unsigned char ieType;
char ieName[100];
unsigned char displayType;
}GTPv2IEName;
typedef struct IE_Message
{
GTPv2Header GTPv2Header;
GTPv2IEheader GTPv2IEheader;
GTPv2IEName GTPv2IEName;
}IE_Message;

