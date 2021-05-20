#include <stdio.h>

int i;

void function(void) {

  for(i = 0; i < 3; i++){
    printf("%d\n", i);
  }
}

int main(void) {
  function();
  return (0);
}
