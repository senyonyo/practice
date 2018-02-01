#include<stdio.h>
#include<stdlib.h>

int main(void){
 int num,i;
 int *data;//*はポインタ宣言
 printf("入力するデータの数を入力してください。");
 scanf("%d",&num);

 data=(int*)malloc(num*sizeof(int));
 
 for (int i=0;i<num;i++){
  printf("%d個目",i+1);
  scanf("%d",&data[i]);
 }
 
 int dumy = 0;
 for(int i=0;i<num;i++){
  for(int j=i+1;j<num;j++){
   if(data[i]>data[j]){
    dumy = data[i];
    data[i] = data[j];
    data[j] = dumy;
   }
  }
 }

 for(int i=0;i<num;i++){
  printf("%d\n",data[i]);
 }
  
 free(data);

 return 0;
}
