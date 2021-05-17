#include <stdio.h>

int main(void) {
/*
  unsigned int i = 0;
  print:
    printf("i value: %u\n", i);
    i++;
    if (i < 3)
      goto print;
*/

  for(unsigned i = 0; i < 3; i++)
    printf("i value (for): %u\n", i);

  puts(" ");

  unsigned int i = 0;
  while (i < 3){ 
    printf("i value (while): %u\n", i);
    i++;
  }

  puts(" ");

  i = 0;
  do{
    printf("i value (do while): %u\n", i);
    i++;
  }while( i < 3);

  return 0;
}
