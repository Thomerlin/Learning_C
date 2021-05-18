#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MALLOC(ptr, size) { \
  ptr = malloc(size); \
  if (ptr == NULL) { \
    fprintf(stderr, "insufficient memoryn\n"); \
    exit (1); \
  } \
}

void *malloc_s(size_t size) {
  void *ptr;
  ptr = malloc(size);
  if (ptr == NULL) {
    fprintf(stderr, "insufficient memory\n");
    exit(1);  
  }
  return (ptr);
}

int main(int argc, char *argv[]) {

  int *p;
  
//  MALLOC(p, sizeof(int));
//  p = malloc_s(sizeof(int));
//  p = malloc(sizeof(int));
/*
  if (ptr == NULL) {
    return(1);
  }
*/ 

  MALLOC(p, 5 * sizeof(int));

  memset(p, 0 , 5 * sizeof(int));
  
  *p = 9; // *(p + 0);
  *(p + 1) = 42; 
  *(p + 2) = 4; 
  *(p + 3) = 21; 
  *(p + 4) = 72; 

  for (int i = 0; i < 5; i++){
    printf("%d\n", *(p + i));
  }
  
  p = realloc(p, sizeof(int) * 6);
  *(p + 5) = 20;

  free(p);

  return (0);
}
