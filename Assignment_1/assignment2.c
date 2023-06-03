#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
     if (n <= 0)
    {  // check if N is negative or zero
        for (int i = n; i <= 1; i++) {
            printf("%d ", i);
        }
    }
    else 
    {
        for (int i = 1; i <= n; i++) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}