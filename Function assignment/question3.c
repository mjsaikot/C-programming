/*Write a C program to take positive integer N as input and print a pattern shown in the sample input output.*/ 
#include <stdio.h>

int main() {
    // Write C code here
    int n,s,k;
    scanf("%d", &n);
    s=n-1;
    k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("%d", k);
        }
        s--;
        k++;
        printf("\n");
    }
    return 0;
}