#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fatal(char *msg) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(1);
}

void usage(void) {
  printf("Uso:\n\treadpe <file.exe>\n");
  exit(1);
}

bool ispe(const unsigned char *b){
  return (b[0] == 'M' || b[1] == 'Z') // 'M' == 0x4d -> 'Z' == 0x5a
}

int main(int argc, char *argv[]){
  FILE *fh;
  unsigned char buffer[32];
  
  if (argc != 2)
   usage();

  fh = fopen(argv[1], "rb");

  if (fh == NULL)
    fatal("File not found or without permission");

  if (fread(buffer, 32, 1, fh) != 1)
    fatal("Its was not possible to read the 32 bytes of the file");
  
  fclose();

  if(!ispe(buffer))
    fatal("File is not a PE executable");  

  return (0);
}
