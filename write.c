#include<unistd.h>
#include<sys/types.h>
#include<syscall.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
  FILE *fp;
  fp=fopen("File.txt","w");
  fprintf(fp,"\nProcess Id-->%d",getpid());
  fprintf(fp,"\n\n Environment Variables\n\n");
  fprintf(fp,"\nROOT-->%s",getenv("ROOT"));
  fprintf(fp,"\n PATH-->%s",getenv("PATH"));
  fprintf(fp,"\n\n Thread Information\n\n");
  fprintf(fp,"\nThread-->%ld",syscall(SYS_gettid));
  fclose(fp);
  return 0;
}
