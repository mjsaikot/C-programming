/* Given a number N and an array A of N numbers. Print the absolute summation of these numbers.
absolute value : means to remove any negative sign in front of a number */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int ar[n];
    //loop start from here
    for (int i = 0; i<n; i++)
    {
        scanf("%d", & ar[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    int ab = -1;
    if (sum<0)
    {
        sum = sum * ab;
    }
    
    printf("%lld", sum);
    
    return 0;
}