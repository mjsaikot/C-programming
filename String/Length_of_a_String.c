#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char a[50];
    scanf("%s",a);
    int count = 0;
    int i = 0;
    while(a[i]!='\0')
    {
        i++;
        count++;
    }
    // int st = strlen(a);
    // printf("%d", st);
    printf("%d", count);

    return 0;
}