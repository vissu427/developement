#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>
#include"Gtpv.h"
int main()
{
IE_Message Message;
Message.GTPv2Header=(GTPv2Header){2,0,0,1,8,1,0};
Message.GTPv2IEheader=(GTPv2IEheader){14,4,0,0};
Message.GTPv2IEName=(GTPv2IEName){14,"Recovery",'B'};
//create a socket
int sock=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);



//addres of the server
struct sockaddr_in server;
server.sin_family=AF_INET;
server.sin_port=htons(2123);
server.sin_addr.s_addr=INADDR_ANY;
//Send the message to the server

sendto(sock,&Message,sizeof(Message),0,(struct sockaddr*)&server,sizeof(server));

close(sock);
return 1;
} 

