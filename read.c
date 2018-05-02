#include<stdio.h>
#include<stdlib.h>
int main(){
  FILE *fp;
  fp=fopen("File.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF){
    putchar(ch);
    ch=getc(fp);
  }
  return 0;
  
}
