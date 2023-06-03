#include <stdio.h>
#include <string.h>
/*You will be given a string S as input contains only small English alphabets. 
You need to tell the number of vowels in it. The string will not contain any spaces.*/
int main()
{
    // Write C code here
    char a[1001];
    scanf("%s", a);
    int count = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }

    }

    printf("%d", count);

    return 0;
}