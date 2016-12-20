#include<stdio.h>
//1st currently working for 1st or last element
// time complexity of o(log n);
int  binary_search(int a[],int start, int end, int find){

  while(start <=  end){
    int mid = start + (end-start)/2;
    if(a[mid]==find){
      return 1;
    }
    else if(a[mid]>find){
      end=mid-1;
    }
    else if(a[mid]<find){
      start=mid+1;
    }
  }

return 0;

}


int main(){

  int a[10]={ 2, 9, 11, 34, 35, 45, 54, 65, 77, 99 };
int no;
scanf("%d", &no);
int i =  binary_search(a, 0, 9, no);

printf("%d ", no);
if(i){
  printf("doesn't ");
}
printf("exists\n");

  return 0;
}
