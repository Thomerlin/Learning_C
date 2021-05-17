#include <stdio.h>

#define SIZE 2

enum pieces {TOWER = 2, HORSE, BISHOP, QUEEN};

int main(int argc, char *argv[]) {

  char tab[SIZE][SIZE] = {0};
  int i, j;

  tab[0][0] = TOWER;
  tab[0][1] = HORSE;
  tab[1][0] = BISHOP;
  tab[1][1] = QUEEN;

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      printf("[%d][%d]=%d ", i, j, tab[i][j]);
      if (j == SIZE-1)
        putchar('\n');
    }
  }



  return 0;
}
