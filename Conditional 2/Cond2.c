#include<stdio.h>
int main ()
{
    int taka;
    scanf ("%d", &taka);
    if (taka>=100)
    {
        printf("Go to the market");
    }
    else if (taka>=50)
    {
        printf("Go to local shop");
    }
    else
    {
        printf("Stay in home");
    }
    return 0;
}