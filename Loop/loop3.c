// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int sum = 0;
    int i;
    int n;
    scanf("%d", &n);
    for(i=1;i<=n;i=i+1)
    {
        sum+=i;
    }
    printf("%d\n",sum);

    return 0;
}