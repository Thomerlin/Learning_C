#include <stdio.h>

int main(void) {
  int a = 359;
  int key = 3;

  if (-1 == a && a < 400) {
    printf("key: %d\n", key);
    printf("hi\n");
  }
  else if (a < 500) {
    puts("500");
  }
  else if (a == 359) {
    puts("a is 359");
  }
  else {
    printf("if is FALSE\n");
    puts("coments");
  }

  // ternary
  (a == 3) ? puts("3") : puts("value a");

  printf("a: %d\n", a ); 

  return 0;
}
