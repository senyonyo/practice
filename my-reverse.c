#include<stdio.h>
#include<string.h>

int len;
char str[20];
char rev[20];

int action(char n[]){
  len = strlen(n);
  printf("\"%s\" の長さは %dです。\n", n, len);
  printf("逆から表示すると、");
  
  int i,count;
  for (i = 0; n[i] != '\0'; i++){
    count++;
  }
  
  for (i=count - 1; i>= 0; i--){
    rev[count] = n[i];
    printf("%c",rev[count]);
  }
  
  printf("です。");
  return 0;
}

int main(){
  printf("文字列を入力してください。");
	scanf("%s",str);
	action(str);
	return 0;
}

