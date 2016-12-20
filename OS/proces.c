#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int value = 5;
int main()
{
  pid_t  childId;
  childId = fork();
  if(childId = 0)
  {
    vlaue += 10;
    return 0;
  }
  else
  {
    wait(NULL);
    printf("%d \n", value);
    return 0;
  }
}
