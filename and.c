#include<stdio.h>

int main(){
  int a,b;
  scanf("%d %d",&a,&b);
  int c=a&b;
  printf("%d\n",c);
  c=~((~a)|(~b));
  printf("%d",c);
}
