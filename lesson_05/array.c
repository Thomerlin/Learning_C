#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  //char c[3];
  //int c[3];
  long int c[3];

  printf("The size of c: %zu\n", sizeof c);
  printf("Number of c elements: %zu\n", sizeof c / sizeof c[0]);
  
  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 67;

  printf("The element 0 of c: %d\n", c[0]);
  printf("The element 1 of c: %d\n", c[1]);
  printf("The element 2 of c: %d\n", c[2]);
  printf("The element 5 of c: %d\n", c[5]);

  printf("the adress of array c in memory: %p\n", c);
  printf("the adress of array &c in memory: %p\n", &c);
  printf("the adress of first element of array c in memory: %p\n", &c[0]);
  printf("the adress of second element of array c in memory: %p\n", &c[1]);

  return 0;
}
