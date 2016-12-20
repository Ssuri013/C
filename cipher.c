#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 9/11 test cases work........3 test case show overtime

int main() {

    //declarations & scanning

    int n, k, i;
    scanf("%d %d", &n, &k);
    char arr[n+k-1];
    int res[n], size=1;
    int a[n+k-1];

    scanf("%c",&arr[i]);
    for(i=0; i<n+k-1; i++){
    scanf("%c", &arr[i]);
        a[i]=arr[i]-48;

    }



    //algo

   res[0]=a[0];

    for( i=1; i<n; i++){
        int x=i-1;
        res[i]=a[i];

        while(x > i-k && x >= 0)
        {
            res[i]= res[i]^res[x];
            x--;
            }
     }

    //print
   for(i=0; i < n ; i++){
        printf("%d", res[i]);
    }
    return 0;
}
