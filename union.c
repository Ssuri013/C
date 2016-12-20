#include<stdio.h>

union x{
  int a;
  char b;
};



int main(){
union x abc;
abc.a = 256+98+512;
printf("%c",abc.b);




}
