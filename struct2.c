#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct LIST{
    int *prev; 
    int value;
    int *next;
};
LIST list;

void insert();
void delete();
void show();
void release();

int main(){
  list.next=&list; 
  list.prev=&list;

  release();
  return 0;
}

void insert(int tmp){
 LIST *prev;
 LIST *p;
 LIST *next;

 p=(LIST*)malloc(sizeof(LIST));
 p-> value = temp;
 p-> next = &list;
 prev=&list;

 for(next=list.next;next!=&list;next=next->next){
  prev=next;
 }

 prev->next=p;
 p->prev=prev;
 
 puts("追加しました");
}

void delete(int tmp){
  LIST* prev;
  prev=&list;

  for(LIST *p=list.next;p!=&list;p=p->next){
    if(p->value==tmp){
      if(p->next!&list){
        prev->next=p->next;
        p->next->prev=prev;
        free(p);
        puts("削除しました");
        return;
      }
     prev=p;
    }
  }
  puts("該当の値は見つかりませんでした");
}

void show(){
  if(list.next==&list){
    puts("何もありません");
    return;
  }

  for(LIST *p=list.next;p!=&list;p=p->next){
    printf("%d",p->value);
  }
  puts("");
}

void release(){
  LIST *next;
  LIST *del;

  next=list.next;

  while(next!=&list){
    del=next;
    next=next->next;
    free(del);
  }
}
