#include <stdio.h>
#include <stdlib.h>

#include "lib/petest.h"

void fatal(char *msg) {
  fprintf(stderr, "Error: %s\n", msg);
  exit(1);
}

void usage(void) {
  printf("Uso:\n\treadpe <file.exe>\n");
  exit(1);
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
  
  fclose(fh);

  if(!petest_ispe(buffer))
    fatal("File is not a PE executable");  

  return (0);
}
