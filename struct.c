#include<stdio.h>

int main(){
  struct person{
    char name[20]; 
    char sex[10];
    int age;
  };

  struct person senyo = {"柴田彩香","女",20};
  struct person keiji = {"武田圭史","男",40};

  printf("%s\n",keiji.name);
  printf("%d\n",senyo.age);
  
  return 0;
}

