// Online C compiler to run C program online
#include <stdio.h>

int main() {
    /*You will be given a positive integer N and N numbers after that. You need to tell the sum of even numbers and the sum of odd numbers separated by a space.*/
    int n;
    scanf("%d", &n);
    int even =0; 
    int odd = 0;
    int sum ;
    for (int i=1; i <=n; i++)
    {
        scanf("%d", &sum);
        if (sum % 2 == 0)
        {
            even+=sum;
        }
        else 
        {
            odd+=sum;
        }
    }
    printf ("%d %d", even, odd);
    

    return 0;
}