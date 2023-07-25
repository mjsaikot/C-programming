#include <stdio.h>
#include <string.h>
//string palindrome
int main() {
    char a[1001],b[1001];
    scanf("%s", &a);
    strcpy(b,a);
    // printf("%s", b);
    int i = 0, j = strlen(b) - 1;
    while(i<j)
    {
        char tmp = b[i];
        b[i] = b[j];
        b[j] = tmp;
        i++;
        j--;
    }
    // printf("%s", b);
    if(strcmp(a,b) == 0)
    {
        printf("Palindrome");
    }
    else{
        printf("NO");
    }

    return 0;
}