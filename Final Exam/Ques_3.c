/*You will be given a 2D matrix of N * M size. The matrix will contain integer value only. 
You need to print the values of last row and then print the values of last column.*/

#include <stdio.h>

int main() {
  // Code start from here
  int n, m;
  scanf("%d %d", & n, & m);
  int a[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", & a[i][j]);
    }
  }
  //print last row
  for (int i = 0; i < m; i++) {
    printf("%d ", a[n - 1][i]);
  }
  printf("\n");
  //print last column
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i][m - 1]);
  }
  printf("\n");
  return 0;
}