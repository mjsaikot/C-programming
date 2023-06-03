#include <stdio.h>
#include <string.h>
	/*Given two strings S and T. Print 2 lines that contain the following in the same order:
Print the length of S and T separated by space.
Print a new string that contains S and T separated by a space.*/
int main()
{
	// Write C code here
	char s[1001];
	scanf("%s", s);
	char t[1001];
	scanf("%s", t);
	int st = strlen(s);
	int tt = strlen(t);
	printf("%d %d\n", st, tt);
	printf("%s %s", s, t);

	return 0;
}