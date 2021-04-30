#include <stdio.h>

/*
 * Conjuction AND
 * 0 && 0 = 0 (FALSE)
 * 0 && 1 = 0 (FALSE)
 * 1 && 0 = 0 (FALSE)
 * 1 && 1 = 1 (TRUE)
*/

/*
 * Disjuction OR
 * 0 || 0 = 0 (FALSE)
 * 0 || 1 = 1 (TRUE)
 * 1 || 0 = 1 (TRUE)
 * 1 || 1 = 1 (TRUE)
*/

// >, >=, <, <=, ==, !=

int main(void) {
  int a = 8;
  int b = 8;

  printf("%d\n", a == b && b < 4); //FALSE
  printf("%d\n", a == b || b < 4); //TRUE
  
  return 0;
}
