#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  int n;

  for(i=1;i<argc;i++){
    n=atoi(argv[i]);
    printf("%d\n",n*2);
  }
  return 0;
}
