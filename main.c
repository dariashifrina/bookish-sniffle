#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ){
  char ** args = (char**)calloc(6,sizeof(char*));
  char *s1 = line;
  int i = 0;
  while(s1){
    args[i] = strsep( &s1, " ");
    i++;
  }
  return args;
}


int main(){
  char line[100] = "ls -al";
  char ** args = parse_args( line );
  execvp(args[0], args);
  return 0;
}
