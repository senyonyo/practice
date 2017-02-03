#include<stdio.h>
#include<string.h>

int len;
char str[20];
char rev[20];

int action(){
    len = strlen(str);
    printf("\"%s\" の長さは %dです。\n", str, len);
}

int main(){
  printf("文字列を入力してください。");
	scanf("%s",str);
	printf("入力された文字列は%sです。",str[20]);
	action();
	printf("逆から表示すると%sです。",rev[0]);
	return 0;
}
