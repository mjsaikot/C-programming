#include <stdio.h>
/*Given a number N and an array A of N digits (not separated by space).
Print the summation of these digits.*/
int main()
{
	// Write C code here
	int n;
	scanf("%d", &n);
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%1d", &ar[i]);
	}

	int x = 0;
	for (int i = 0; i < n; i++)
	{
		x = x + ar[i];
	}

	printf("%d\n", x);

	return 0;
}