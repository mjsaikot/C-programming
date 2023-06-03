#include <stdio.h>
#include <string.h>

int main()
{
	// Write C code here
	char s[1001];
	scanf("%s", s);
	int cap = 0;
	int small = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			small++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			cap++;
		}
	}
	printf("%d %d", cap, small);

	return 0;
}

