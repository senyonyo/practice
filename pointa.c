#include<stdio.h>
#include<stdlib.h>

int main(void){
 int num,i;
 int *data;
 printf("入力するデータの数を入力してください。");
 scanf("%d",&num);

 data=(int*)malloc(num*sizeof(int));
 
 for (int i=0;i<num;i++){
  printf("%d個目",i+1);
  scanf("%d",&data[i]);
 }

 for(int i=0;i<num;i++){
  printf("%d\n",data[i]);
 }
  
 free(data);

 return 0;
}
