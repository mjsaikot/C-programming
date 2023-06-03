#include <stdio.h>

int main() {
    // Write C code here
    char a[50];
    // gets(a);
    fgets(a,16,stdin);
    int sz = sizeof(a)/sizeof(char);
    printf("%d: ", sz);
    printf("%s", a);

    return 0;
}
