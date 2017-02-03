#include <stdio.h>

/*--- 文字列strの長さを返す ---*/
unsigned str_length(const char str[]){
    unsigned len = 0;
    while (str[len])
        len++;
    return (len);
}

/*--- 文字列を逆から表示 ---*/
void put_rstring(const char str[]){
    unsigned i = str_length(str);
    while (i-- > 0)
        putchar(str[i]);
}

int main(void){
    char str[100];
    
    printf("文字列を入力してください：");
    scanf("%s", str);
    
    printf("逆から読むと");
    put_rstring(str);
    puts("です。");
    
    return (0);
}
