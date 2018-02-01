#include<stdio.h>
#include<string.h>

int main(){
  FILE * fp;
  char str[512], *ptr;

  fp = popen("ls","r");
  while(1){
    fgets(str,512,fp);
    if(feof(fp)){
      break;
    }
    ptr = strchr(str,'\n');
    if(ptr == NULL){
      *ptr = '\0';
   }
   printf("%s\n",str);
  }
  return 0;
}
