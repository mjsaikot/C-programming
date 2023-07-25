#include<stdio.h>
#include <limits.h>

int main() {
  int n;
  scanf("%d", & n);
  int min = INT_MAX;
  int max = INT_MIN;
  int arr[n];
  int min_idx, max_idx;
  for (int i = 0; i < n; i++) {
    scanf("%d", & arr[i]);
  }

  for (int i = 0; i < n; i++) 
  {
        if (arr[i] < min) 
        {

        min = arr[i];
        min_idx = i;
        }
        if (arr[i] > max) 
        {
        max = arr[i];
        max_idx = i;
        }
  }
  arr[max_idx] = min;
  arr[min_idx] = max;
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}