/*Write a C program that will take an integer N and creates this 
pattern for the corresponding inputs.*/

#include <stdio.h>

int main() {
  // Write C code here
  int n, k, s;
  scanf("%d", & n);
  s = n - 1;
  k = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= s; j++) {
      printf(" ");
    }
    for (int j = 1; j <= k; j++) {
      if (i % 2 == 0) {
        printf("^");
      } else {
        printf("*");
      }

    }
    s--;
    k = k + 2;
    printf("\n");
  }

  return 0;
}