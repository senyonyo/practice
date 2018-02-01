#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>
#include<sys/types.h>

#define BUFFERSIZE 64

int main(int argc,char *argv[]){
  int buf[BUFFERSIZE];
  int readSize;
  char fd;

  fd = open(argv[1],O_RDONLY);
  if(fd == -1){
    do{
      readSize = read(fd,buf,BUFFERSIZE);
      write(1,buf,readSize);
    }while(readSize == BUFFERSIZE);
    close(fd);
  }else{
    printf("エラー");    
  }
  return 0;
}
