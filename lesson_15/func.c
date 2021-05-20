#include <stdio.h>

//retun_type name(type_arg name_arg)
 
int sum(int n1, int n2, int n3) {
  int res;
  res = n1 + n2 + n3;
  return res;
}

int main(void) {
  int num1, num2, num3;

  printf("Type a number: ");
  scanf("%d", &num1);
  printf("Type a number: ");
  scanf("%d", &num2);
  printf("Type a number: ");
  scanf("%d", &num3);

  printf("sum %d\n", sum(num1, num2, num3));

  return 0;
}
