#include<stdio.h>
#include<stdlib.h>
#include<string.h>
unsigned char charset[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"};


void encode{}












int main(){
  char in[]={"man"};
  char *out[1024];
  out = encode(in, out, strlen(in));
  printf("%s",out);

}
