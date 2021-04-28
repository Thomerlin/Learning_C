#include <stdio.h>
#include <limits.h>

int main(void)
{
  int i = INT_MAX;
  printf("The size of i (int) %zu bytes / %zubits\n", sizeof i, sizeof i *8);
  printf("i value: %d\n", i);

  return 0;
}
