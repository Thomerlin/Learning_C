#include <stdio.h>

int main(void)
{
  char c; //signed char or unsigned char

  printf("The size of c (char) is: %lu\n", sizeof c);
  //printf("The size of type char is: %lu\n", sizeof (char));
  printf("The size of c (char) is: %lu byte / %lu bits\n", sizeof c, sizeof c * 8);

  //c = 256;
  //c = 255;
  //c = 128;
  c = 127;
  printf("c value: %i\n", c);

  return(0);
}
