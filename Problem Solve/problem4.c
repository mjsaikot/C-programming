#include<stdio.h>
int main ()
{
    int c;
    scanf("%d", &c);
    int digit = c/1000;
    if (digit % 2 == 0)
    {
        printf("EVEN");
    }
    else 
    {
        printf("ODD");
    }
    return 0;
}