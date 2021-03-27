#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool b;
  char c;

  c = 0; // false
  c = 1; // true

  b = true;
  b = false;

  printf("The size of b (bool) is: %lu\n", sizeof b);
  printf("b value: %i\n", b);

  return (0);
}
