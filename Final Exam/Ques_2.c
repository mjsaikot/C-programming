/*You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.
Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the 
non-diagonal elements are 0.*/

#include <stdio.h>
//Code start from here;
int main() {
  int n;
  scanf("%d", & n);
  int a[n][n];
  //Loop for array input
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", & a[i][j]);
    }
  }
  int flag = 1;
  //loop start
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        //Condition
      if (i == j) {
        if (a[i][j] != 1) {
          flag = 0;
        }
      } else if (a[i][j] != 0) {
        flag = 0;
      }
    }

  }
  //second condition for output
  if (flag == 1) {
    printf("YES");
  } else {
    printf("NO");
  }

  return 0;
}