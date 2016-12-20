#include<stdio.h>

// O(n^2)
void selection_sort(int a[], int n){

int i,j,pos,temp;
//n times titration
for(i = 0; i < n-1; i++)
{
  pos=i;
  //in each titration smallest elemnt is placed on start of that loop pos
  for(j = i; j < n ; j++){
    if(a[pos]>a[j]){
      pos=j;
    }
  }
  temp=a[i];
  a[i]=a[pos];
  a[pos]=temp;
}



}

int main(){

  int a[10]={123, 8, 7, 6, 5, 4, 3, 2, 1, 0  };

  selection_sort(a, 10);
int i;
  for( i=0; i<10; i++){
    printf("%d ",a[i]);
  }
  printf("\n");




  return 0;
}
