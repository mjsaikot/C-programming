#include <stdio.h>

int main() {
    // Write C code here
    int i;
    int n;
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1)
    {
        if(i%2==0)
        {
            printf("%d-Even\n",i);
        }
        else
        {
            printf("%d-Odd\n",i);
        }
    }

    return 0;
}