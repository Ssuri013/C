/*
 * Complete the function below.
 * Please store the size of the string array to be returned in result_size pointer. For example,
 * char a[2][6] = {"hello", "world"};
 * *result_size = 2;
 * return a;
 *
 */
char** braces(int n, char** str, int* result_size) {

    int x=0;
    *result_size=n;
    char *res[n];
     while(n--){
        int i=0;
        int j=-1;
        char arr[100]; //="                                                                                ";

        while(str[x][i]!='\0'){
            if(j==-1){
                arr[++j]=str[x][i++];
            }
            int a,b;
            a=arr[j];
            b=str[x][i];

            if(a==40 && b==41 ){
                i++;
                j--;
            }
            else if(a==123 && b==125){
                i++;
                j--;
            }
            else if(a==91 && b==93){
                i++;
                j--;
            }
            else{
                arr[++j]=str[x][i++];
            }

          }
        char *temp=(char*)malloc(10*sizeof(char));
         if(j==-1){
           // printf("YES \n");
             temp[0]='Y';
             temp[1]='E';
             temp[2]='S';
             temp[3]='\0';
         }
        else{
           // printf("NO \n");
             temp[0] = 'N';
             temp[1] = 'O';
             temp[2]='\0';
        }
         //printf("%s %d  ",temp,x);
            res[x]=temp;
            x++;
    }

return res;
}
