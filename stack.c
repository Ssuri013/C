//  gcc -c stack.c   just create object and not include dependencies
// ar -cvr libstack.a stock.o
// gcc stackclient.c -lstack
#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

struct node{
  int item;
  struct node *next;
};


static struct node *first=NULL;
static int n=0;


void push(int item){
  struct node *oldfirst=first;
  first=(struct node *)malloc(sizeof(struct node));
  first->item=item;
  first->next=oldfirst;
  n++;
}

int pop(){

  struct node *oldfirst = first;
  int item= first->item;
  first=first->next;
  oldfirst->next=NULL;
  n--;
  free(oldfirst);
  return item;
}



int size(){
  return n;
}
