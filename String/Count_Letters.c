#include <stdio.h>
#include <string.h>
#define MAX_LEN 10000007
int main()
{
	//code start from here
	char s[MAX_LEN];
	scanf("%s", s);
	int cnt[26] = { 0 };

	for (int i = 0; i < strlen(s); i++)
	{
		int val = s[i] - 'a';
		cnt[val]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (cnt[i] != 0)
		{
			printf("%c : %d\n", i + 'a', cnt[i]);
		}
	}

	return 0;
}