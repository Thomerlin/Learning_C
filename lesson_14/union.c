#include <stdio.h>
#include <string.h>

union st {
  //unsigned char id[5];
  unsigned char id;
  unsigned int number;
};

int main(void) {
  union st s;

  //s.id[2] = 0x42;
  //s.id[3] = 0x90;
  s.number = 2021;
  s.id = 0xe6;

  printf("s.number: %d\n", s.number);

  memset(&s, 0, sizeof(union st));

  //printf("s.id: %d\n", s.id);
  printf("s.number: %d\n", s.number);

  printf("sizeof(union st): %ld\n", sizeof(union st));

  return 0;
}
