// 2D Array input output
#include <stdio.h>

int main() {
    // Write C code here
    int row,col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}