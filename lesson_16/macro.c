#include <stdio.h>
#include "f.h"

#define SIZ 1024
#define SQUA(x) (x*x)
#define MAX(x, y) (x > y ? x : y)
#define MAX3(x, y, z) (MAX(MAX(x, y), MAX(y, z)))

#define DEBUG
//#undef DEBUG

#define VAR(x) printf("The variable "#x" has a value of: %d\n", x)

int main(void) {
  
  char buff[SIZ] = { '\0' };
  
  int count = 90;
  //printf("Type something: ");
  //scanf("%s", buff);

  //printf("You typed: %s\n", buff);

  printf("%d\n", SQUA(8));
  printf("%d\n", MAX(3, 9));
  printf("%d\n", MAX3(3, 9, 42));

#ifdef DEBUG
  printf("%s - %s - Is line: %d\n", __TIME__, __DATE__, __LINE__);
  VAR(count);
  
//#else
#endif
  //print("Hello World"); f.h
  return 0;
}
