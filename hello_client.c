#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
 struct sockaddr_in server;
 int sock;
 char buf[32];
 int n;

 sock = socket(AF_INET, SOCK_STREAM, 0);

 server.sin_family = AF_INET;
 server.sin_port = htons(12345);
 // server.sin_addr.s_addr = inet_addr("127.0.0.1");
 server.sin_addr.s_addr = inet_addr("192.168.33.10");
 
 connect(sock, (struct sockaddr *)&server, sizeof(server));

 write(sock, argv[1], sizeof(argv[1]));

 memset(buf, 0, sizeof(buf));
 n = read(sock, buf, sizeof(buf));

 printf("%s\n", buf);

 close(sock);

 return 0;
}
