#include<stdio.h>
#include<unistd.h>
int main ()
{
    printf(" the process  id is  %d\n",getpid());

  printf("the user id is %d\n",getuid());


printf("the group id is %d\n",getgid());
}
