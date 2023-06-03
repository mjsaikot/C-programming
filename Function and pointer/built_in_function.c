// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // double x;
    // scanf("%lf", &x);
    // // int s = ceil(x);
    // // int s = floor(x);
    // int s = round(x);
    // printf("Ans: %d", s);
    // int x;
    // scanf("%d", &x);
    // double s = sqrt(x);
    // printf("%lf", s);
    int x,y;
    scanf("%d %d", &x,&y);
    int s = pow(x,y);
    printf("%d\n", s);
    int a = abs(s);
    printf("%d", a);

    return 0;
}