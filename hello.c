#include<unistd.h>
int main(){
  char msg[] = "hello,world!\n";
  write(1,msg,sizeof(msg));
  return 0;
}
