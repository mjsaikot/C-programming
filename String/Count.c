#include <stdio.h>
#include <string.h>
#include <limits.h>
	//Given a string S. Print the summation of its digits.
int main()
{
	// Write C code here
	char a[1000001];
	scanf("%s", a);
	int sum = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		sum = sum + (a[i] - '0');
	}

	printf("%d", sum);

	return 0;
}