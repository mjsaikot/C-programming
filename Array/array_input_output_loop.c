#include <stdio.h>

int main() {
    // Write C code here
    int ar[6];
    for(int i=0;i<6;i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i=0;i<6;i++){
        printf("%d\n", ar[i]);
    }
    return 0;
}