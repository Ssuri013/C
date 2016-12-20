#include<stdio.h>

// time complexity of O(n^2)
//highest element is shifted to last
//can be used to
void bubble_sort(int a[], int n){

  int i,j,temp;
// i is for external loop telling number of times whole array be traversed
  for(i=0; i<n-1; i++)
  // aft n titrations last n elements are sorted so to make it more efficient end  point is changed
      for(j=0; j<n-i-1; j++){

        if(a[j] > a[j+1]){
          temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
        }
      }

}


int main(){

  int a[10]={123, 8, 7, 6, 5, 4, 3, 2, 1, 0  };

  bubble_sort(a, 10);
int i;
  for( i=0; i<10; i++){
    printf("%d ",a[i]);
  }
  printf("\n");




  return 0;
}
