#include <stdio.h>

int main() {
  // Write C code here
  int a = 1, i, mul;
  scanf("%d", & a);
  for (i = 1; i <= 12; i = i + 1) {
    mul = a * i;
    printf("%d * %d = %d\n", a, i, mul);

  }

  return 0;
}