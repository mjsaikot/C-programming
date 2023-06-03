#include <stdio.h>
#include <string.h>
 
int main()
{
 
    int n;
    scanf("%d", &n);
    getchar();
 
 
    char s[101];
    for(int i=0; i<n; i++)
    {
        fgets(s, 101, stdin);
        int len = strlen(s);
        if(len <= 10)
        {
          printf("%s", s);
        }
        else
        {
          printf("%c%d%c\n", s[0], len-2, s[len-1]);
        }
    }
 
    return 0;
}