#include <stdio.h>
#include <string.h>

struct st {
  //unsigned char id[5];
  unsigned char id;
  unsigned int number;
};

int main(void) {
  struct st s;

  //s.id[2] = 0x42;
  //s.id[3] = 0x90;
  s.number = 2021;

  printf("s.number: %d\n", s.number);
  memset(&s, 0, sizeof(struct st));

  //printf("s.id: %d\n", s.id);
  printf("s.number: %d\n", s.number);

  printf("sizeof(struct st): %ld\n", sizeof(struct st));

  return 0;
}
