#include<stdio.h>
#include<string.h>

int len;
char str[20];
char rev[20];

int action(){
  len = strlen(str);
  printf("\"%s\" の長さは %dです。\n", str, len);
  printf("逆から表示すると、");
  
  int i,count;
  for (i = 0; str[i] != '\0'; i++){
    count++;
  }
  
  for (i=count - 1; i>= 0; i--){
    printf("%c", str[i]);
  }
  
  printf("です。");
  return 0;
}

int main(){
  printf("文字列を入力してください。");
	scanf("%s",str);
	action();
	return 0;
}

