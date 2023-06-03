#include <stdio.h>
#include <string.h>
/*Given two strings X and Y . Print the smallest lexicographical one*/
int main() {
    // Write C code here
    char a[21],b[21];
    scanf ("%s", a);
    scanf ("%s", b);
    int i=0;
    while(1)
    {
       if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b [i])
        {
            printf("%s", a);
            break;
        }
        else {
            printf("%s", b);
            break;
        }
    }
    
    return 0;
}