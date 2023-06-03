#include <stdio.h>

int main() {
    //print next lower aphabate
  char c;
  scanf("%c", & c);
  if (c >= 'a' && c < 'z') {
    c++;
  } else if (c == 'z') {
    c = 'a';
  }
  printf("%c", c);
  return 0;
}