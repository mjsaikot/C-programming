#include <stdio.h>
#include <string.h>
/*You will be given a string S as input. The string will contain only English 
small alphabets and will not contain any spaces.
You need to tell how many time each alphabets from a to z appears.*/
int main()
{
	// Write C code here
	char s[1001];
	scanf("%s", s);
	int cnt[26] = { 0 };

	for (int i = 0; i < strlen(s); i++)
	{
		int val = s[i] - 'a';
		cnt[val]++;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%c - %d\n", i + 'a', cnt[i]);
	}

	return 0;
}