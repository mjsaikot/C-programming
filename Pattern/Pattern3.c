#include <stdio.h>
/*Pattern Reverse*/
int main() {
    // Write C code here
    int n,k,s;
    scanf("%d", &n);
    s=n+1;
    k=(n*2)-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1; j<=k; j++)
        {
            printf("*");
        }
        s++;
        k=k-2;
        printf("\n");
    }
    
    return 0;
}