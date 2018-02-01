#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

#define MAX_AGES 10
#define MAX_LEN 100

void chail(int argc, char *argv[MAX_AGES]);

int main(int argc, char *argv[]){
  int argc,n = 0;
  int p_id;
  int status;
  int input[MAX_LEN],*
  int return_code = 0;
  


  while(1){
    char input[512],*cp;
    
    printf("command>");
    cp = input;
    for(argc = 0; argc<10; argc++){
      if
    }
  
    if((p_id = fork()) == 0){
      printf("子プロセス開始\n");
      system(argv[1]);
      printf("子プロセス終了\n");

    }else{
      if(p_id != -1 ){
        wait(&status);
        printf("親プロセス終了\n");
      }else{
        perror("親プロセス：");
        return_code = 1;
      }
    }
      return return_code;
  }
}
