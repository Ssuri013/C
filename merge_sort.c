#include<stdio.h>

void merge(int a[], int start, int mid, int end){
int i=start;
int j=mid+1,k=0;
int x=end-start;
int arr[x];
while(i <= mid || j<=end){

  if(i>mid){
  arr[k++] = a[j++];
  }
  else if(j>end){
    arr[k++] = a[i++];
  }
else if(a[i]>a[j]){
  arr[k++] = a[j++];
}
  else{
    arr[k++] = a[i++];
  }
}

for(i=start,k=0; i<=end; i++,k++){
  a[i] = arr[k];
}
}

void merge_sort(int a[], int start, int end){

  if(start<end){
    int mid=(start+end)/2;
    merge_sort(a,start,mid);
    merge_sort(a,mid+1,end);
    merge(a,start,mid,end);
  }
}

int main(){
  int n=50;
int a[n];
 int i;
 for(i=0; i<n; i++){
   a[i]=50-i;
 }

 merge_sort(a,0,n-1);

 for(i=0; i<n; i++){
   printf("%d ",a[i]);
 }


}
