#include <stdio.h>

void function(void) {
  int i;

  for(i = 0; i < 3; i++){
    printf("%d\n", i);
  }
}

int main(void) {
  function();
  return (0);
}
