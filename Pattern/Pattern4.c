#include <stdio.h>
/*Number Pattern*/
int main() {
    
    int n,k=1;
    scanf("%d", &n);
    for (int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        k++;
    }

    return 0;
}