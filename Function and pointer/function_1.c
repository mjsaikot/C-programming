#include <stdio.h>
 //Has Return + Parameter
int sum(int x, int y) {
  int sum = x + y;
  return sum;
}
int main() {
  // Write C code here
  int s = sum(10, 100);
  printf("%d", s);

  return 0;
}