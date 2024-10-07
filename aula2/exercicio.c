#include <stdio.h>

int main(void) {
  int n = 1025;
  char *pchar = &n;
  printf("byte 0: %d\n, byte 1: %d", *pchar, *(pchar+1));
  *pchar = *pchar+1;
    printf("p: %d\n", *pchar);


  return 0;
}