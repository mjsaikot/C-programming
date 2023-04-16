#include <stdio.h>
#include <limits.h>

int main() 
{
    // Write C code here
    int n;
    scanf("%d", &n);
    int a, max=INT_MIN;
    for(int i=1; i<=n; i++);
    {
        scanf("%d", &a);
        if(a>max)
        {
            max=a;
        }
    }
    
    return 0;
}