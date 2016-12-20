#include<stdio.h>

void swap(int a[], int x, int y){
  int temp;
  temp = a[x];
  a[x] = a[y];
  a[y] = temp;
}

int chooseRandomPivot(int a[], int left, int right)
{
    int r = rand() % (right-left+1);
    return left + r;
}

int  q_sort(int a[], int x, int left, int right)
{
    if(left >= right) return;

    int pIndex = chooseRandomPivot(a, left, right);
//partition func//
    swap(a, left, pIndex);

    int last = left; //Will contain the position with which pivot needs to be replaced
    int i = left + 1;
    for( ;i <= right; ++i)
        if(a[i] <= a[left])
            swap(a, i, ++last);

    swap(a, left, last);
/////////////////////////////////////////////////

     if(last==x){
       return a[x];
     }
int y;
  if(last>x){
     y=q_sort(a, x, left, last-1);
  }
  else{
     y=q_sort(a, x, last+1, right);
  }
  return y;
}

int main()
{
// int n=50;
// int a[n];
//  int i;
//  int x;
//  scanf("%d",&x);
//  for(i=0; i<n; i++){
//
//    a[i]=50-i;
//  }
int n;
scanf("%d",&n);
int a[n],i;
 for(i=0; i<n; i++){
scanf("%d",&a[i]);
 }
  int x;
   scanf("%d",&x);

    printf("%d ",q_sort(a,x, 0 , n-1));

    return 0;
}
