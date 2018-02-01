#include<stdio.h>
#include<stdlib.h>

struct LIST{
  struct LIST *prev;
  struct LIST *next;
  int value;
}

LIST list;

void insert(int tmp){
  LIST *p;
  LIST *prev;
  LIST *next;

  p = (LIST*)malloc(sizeof(LIST));
  p->prev = p;
  p->next = p;
  p->value = tmp;
  return p;
}

void insert(struct LIST*pos,struct LIST*val){
  val->next = pos->next;
  val->next->prev = val;
  pos->next = val;
  val->prev = pos;
}

void insert_before(struct LIST *pos, struct LIST *val){
  insert(pos->prev, val);
}

struct LIST*delete(struct LIST*pos){
  pos->prev->next = pos->next;
  pos->next->prev = pos->prev;
  return pos;
}
