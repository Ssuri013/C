#include<stdio.h>


int chooseRandomPivot(int a[], int left, int right)
{
    int r = rand() % (right-left+1);
    return left + r;
}

void q_sort(int a[], int left, int right)
{
    if(left >= right) return;

    int pIndex = chooseRandomPivot(a, left, right);
//partition func///////////////////////////
    swap(a, left, pIndex);

    int last = left; //Will contain the position with which pivot needs to be replaced
    int i = left + 1;
    for( ;i <= right; ++i)
        if(a[i] <= a[left])
            swap(a, i, ++last);

    swap(a, left, last);
/////////////////////////////////////////////////



    q_sort(a, left, last-1);
    q_sort(a, last+1, right);
}

int main()
{
  int n=50;
int a[n];
 int i;
 for(i=0; i<n; i++){
   a[i]=50-i;
 }
    q_sort(a, 0, n-1);


    for(i=0; i<n; i++){
      printf("%d ",a[i]);
    }
    return 0;
}
