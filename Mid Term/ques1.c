#include <stdio.h>
/*You will be given an integer array A of size N. You need to count the
number of even elements and the number of odd elements in the array and print them.*/
int main() {
    int n;
    scanf("%d", &n);
    int ar[n],even=0,odd=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
    }
    printf("%d %d", even, odd);

    return 0;
}