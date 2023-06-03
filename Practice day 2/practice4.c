/*A number of two digits is lucky if one of its digits is divisible by the other.
For example, 39, 82, and 55 are lucky, while 79 and 43 are not.
Given a number between 10 and 99, determine whether it is lucky or not.*/
#include <stdio.h>
 
int main() {
  // Write C code here
  int a;
  scanf("%d", &a);
  int fd = a/10;
  int ld = a%10;
  if (ld % fd == 0 || fd % ld == 0) {
    printf("YES");
  } else {
    printf("NO");
  }
 
  return 0;
}