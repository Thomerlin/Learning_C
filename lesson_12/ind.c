#include <stdio.h>

int main(int argc, char *argv[]) {

  char s[10] = "thomaz";
    
  printf("%x\n", s[29]);
  printf("%x\n", *(s+29));

  return 0;
}
