#include <stdio.h>
//Has return + No parameter
int mul(void)
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    int m = x*y;
    return m;
}

int main() 
{
    // Write C code here
    int result = mul();
    printf("%d", result);
    
    return 0;
}