#include <stdio.h>
#include <limits.h>

/*
 * & - AND
 * | - OR
 * ^ - XOR
 * ~ - NOT
 * << Shift Left (multiply by base: Bit, Dec, Hex ...)
 * >> Shift Righ (dividing by base: Bit, Dec, Hex ...)
*/

int main(void)
{
  int a = 2; // 10
  int b = 3; // 11
   //result 2 = 10 

  printf("%d\n", a & b);

  return 0;
}
