// Sum of two matrix
#include <stdio.h>
//main function
int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int a[n][m],b[n][m],c[n][m];
    //loop for input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}