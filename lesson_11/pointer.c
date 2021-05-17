#include <stdio.h>

void print(char *r) {
  while (*r) // or *r != '\0'
    putchar(*r++);
}

int main(void) {
 
/*
  int i = 2021;
  int *pointer;
  
  pointer = &i;

  printf("The adress of i in memory: %p\n", &i);
  printf("The adress of pointer in memory: %p\n", pointer);
  printf("The i value: %d\n", i);
  printf("The pointer value: %d\n", *pointer);
*/

/*
  int a[2];

  a[0] = 2021;
  a[1] = 2022;

  printf("a[0] = %d\na[1] = %d\n", *a, *a+1); 
*/

  char s[] = "thomaz";
  char *t = "thomaz";
  char u[] = { 0x74, 0x68, 0x6f, 0x6d, 0x61, 0x7a, '\n', 0x00};

  //puts(s);
  //puts(t);
  //puts(u);

  print(u);

  return 0;
}
