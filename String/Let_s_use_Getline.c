#include <stdio.h>
#include <string.h>
/*Given a string S. Print the string S from the beginning to the first '\' character 
without printing the '\'.
Hint: use function getline(cin, s).*/
int main() {
    // Write C code here
    char a[1000001];
    fgets (a,1000001,stdin);
    for(int i=0; a[i]!='\\'; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}