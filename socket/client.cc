#include <stdio.h>  
#include <string.h>  
#include <sys/socket.h>  
#include <netinet/in.h>  
#include <syslog.h>  
#include <errno.h>  
#include <stdlib.h>  
#define MAX_LISTEN_NUM 5  
#define SEND_BUF_SIZE 100  
#define RECV_BUF_SIZE 100  
#define SERVER_PORT 1010  
int main()  
{  
    int sock_fd = 0;  
    char recvbuf[RECV_BUF_SIZE] = {0};  
    char sendbuf[SEND_BUF_SIZE] = {0};  
    int recvlen = 0;  
    int retlen = 0;  
    int sendlen = 0;  
    int leftlen = 0;  
    char *ptr = NULL;  
    struct sockaddr_in ser_addr;  
      
    memset(&ser_addr, 0, sizeof(ser_addr));  
    ser_addr.sin_family = AF_INET;  
    inet_aton("127.0.0.1", (struct in_addr *)&ser_addr.sin_addr);  
    ser_addr.sin_port = htons(SERVER_PORT);  
    sock_fd = socket(AF_INET, SOCK_STREAM, 0);  
    if(sock_fd < 0)  
    {  
        syslog(LOG_ERR, "%s:%d, create socket failed", __FILE__, __LINE__);  
        exit(1);  
    }  
    if(connect(sock_fd, (struct sockaddr *)&ser_addr, sizeof(ser_addr)) < 0)  
    {  
        syslog(LOG_ERR, "%s:%d, connect socket failed", __FILE__, __LINE__);  
        exit(1);  
    }  
     //receive data  
     recvlen = 0;  
     retlen = 0;  
     ptr = recvbuf;  
     leftlen = RECV_BUF_SIZE -1;  
     //do  
     {  
         retlen = recv(sock_fd, ptr, leftlen, 0) ;  
      if(retlen < 0)  
      {  
          if(errno == EINTR)  
            retlen = 0;  
        else  
            exit(1);  
      }  
      recvlen += retlen;  
      leftlen -= retlen;  
      ptr += retlen;  
     }  
     //while(recvlen && leftlen);  
     printf("receive data is : %s", recvbuf);  
     sprintf(sendbuf, "hello server/n");  
     //send data  
     sendlen = strlen(sendbuf) +1;  
     retlen = 0;  
     leftlen = sendlen;  
     ptr = sendbuf;  
    // while(leftlen)  
     {  
         retlen = send(sock_fd, ptr, sendlen, 0);  
      if(retlen < 0)  
      {  
          if(errno == EINTR)  
            retlen = 0;  
        else  
            exit(1);  
      }  
      leftlen -= retlen;  
      ptr += retlen;  
     }  
     close(sock_fd);  
      
}  
