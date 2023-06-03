#include <stdio.h>

int main() {
  /*You will be given a positive integer N and an array A of size N. 
  Suppose, the index starts from 0, then you need to print all the values
  at even indexes in reverse way.*/
  int n, x;
  scanf("%d", & n);
  int ar[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", & ar[i]);
  }
  for (int i = n - 1; i >= 0; i--) {
    if (i % 2 == 0) {
      printf("%d ", ar[i]);
    }
  }
  printf("\n");

  return 0;
}