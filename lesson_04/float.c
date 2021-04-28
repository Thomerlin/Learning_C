#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void) {
  float f = 3e2; // 3 * 10^2
  double d = 1;
  long double ld = 1;

  printf("The size of f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8);
  printf("The size of d (double): %zu bytes / %zu bits\n", sizeof d, sizeof d * 8);
  printf("The size of d (long double): %zu bytes / %zu bits\n", sizeof ld, sizeof ld * 8);
  
  printf("f value: %.2f\n", f);

  return 0;
}
