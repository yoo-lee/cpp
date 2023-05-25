#include 
#include 
#include 
#include 
#include 

int main (void) {
  int n;
  int bufsize = 8192;
  char buf[bufsize];

  while ((n = read(STDIN_FILENO, buf, bufsize)) > 0)
    if (write(STDOUT_FILENO, buf, n) != n) {
      fprintf(stderr, "write error");
      exit(1);
    }

  exit(0);
}