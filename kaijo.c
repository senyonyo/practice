#include<stdio.h>

int again(int n){
  if(n==0){
    return 1;
  }else{
    return n * again(n-1);  
  }
}

int main(){
 int m;
 printf("自然数を入力してください");
 scanf("%d",&m);
 printf("%dの階乗は%dです。",m,again(m));
 return 0;
}
