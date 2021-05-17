#include <stdio.h>

int main(int argc, char *argv[], /* char *envp[]*/ ) {

/* 
  printf("numbers of arguments: %d\n", argc);
  puts(argv[2]);
*/

/* TEST argc

  if(argc < 2)
    printf("Type an IP\n");
  else if( argc > 2)
    printf("Only one IP\n");
*/
 
  int i;

  for(i=0; i < argc; i++)
    puts(argv[i]);

 // puts(envp[1]);

  return (0);
}
