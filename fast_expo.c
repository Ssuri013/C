#include<stdio.h>

long long int fast_expo(int no,int power){
long long int result=1;
while(power){
  if(power%2==1){
    result=result*no;
  }
  power=power/2;
  no=no*no;
}

/*
while(power){
  if(power&1){
    result=result*no;
  }
  power=power>>1;
  no=no*no;
}


*/

return result;
}







int main(){

int no,power;
scanf("%d%d",&no,&power);

long long int x=fast_expo(no,power);

printf("%lld\n",x);

  return 0;
}
