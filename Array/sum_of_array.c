#include <stdio.h>

int main() {
    // sum of array
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", & ar[i]);
    }
    int sum = 0;
    for (int i=0; i<n; i++)
    {
        
        sum = sum + ar[i];
    }
    printf ("%d\n", sum);

    return 0;
}