#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char x;
    scanf("%c", &x);
    if (x >= '0' && x <= '9')
    {
        printf("IS DIGIT\n");
    }
    else 
    {
        printf ("ALPHA\n");
        if (x >= 'a' && x <= 'z')
        {
            printf("IS SMALL");
        }
        else
        {
            printf ("IS CAPITAL");
        }
    }

    return 0;
}