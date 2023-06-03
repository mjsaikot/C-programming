// String compare by lexicographically
#include <stdio.h>

int main() {
    // Write C code here
    char a[100],b[100];
    scanf("%s %s", a, b);
    int val = strcmp (a,b);
    printf("%d", val);
    // Bellow we share the whole progress of strcmp
    // int i = 0;
    // while(1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Same\n");
    //         break;
    //     }
    //     else if (a[i] =='\0')
    //     {
    //         printf("A Small");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B Small");
    //         break;
    //     }
    //     if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] < b [i])
    //     {
    //         printf("A Smaller");
    //         break;
    //     }
    //     else {
    //         printf("B Smaller");
    //         break;
    //     }
    // }

    return 0;
}