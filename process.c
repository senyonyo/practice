#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main(){
  pid_t pid;
  char buf[256];
  int pp[2];

  pipe(pp);

  pid = fork();

  if(pid == 0){
    close(pp[0]);
    printf("親プロセスへ送信する文字列:");
    fgets(buf,256,stdin);
    write(pp[1],buf,strlen(buf)+1);
    close(pp[1]);
  }else{
    close(pp[1]);
    read(pp[0],buf,256);
    printf("子プロセスから送信された文字列:%s",buf);
  }

  return 0;
}
