#include<stdio.h>

// O(n^2)
void insertion_sort(int a[], int n){
int i,j,temp;

  for(i=1; i<n; i++){

    j=i;
    temp = a[i];
    //as rest will be shifted right
    while( j > 0 && temp < a[j-1] ){
        a[j] = a[j-1];
        j--;
      }

    a[j] = temp;

}



}

int main(){

  int a[10]={123, 8, 7, 6, 5, 4, 3, 0, 1, 2  };

  insertion_sort(a, 10);
int i;
  for( i=0; i<10; i++){
    printf("%d ",a[i]);
  }
  printf("\n");




  return 0;
}
