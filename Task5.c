
#include <sys/syscall.h>
 
#include <sys/types.h> 
#include <stdio.h>

int main( int argc , char *argv [ ] )
 
{ 
  printf ("Thread id %ld\n" , syscall (SYS_gettid ));
     printf("PArent Process ID %d\n" , syscall (SYS_getppid));
printf("Group ID %d\n" , syscall (SYS_getgid));
printf("Real User ID %d\n" , syscall (SYS_getuid));
printf("Effective  ID %d\n" , syscall (SYS_geteuid));
 /* could also pass __NR_gettid */ 
  return 0;
}
