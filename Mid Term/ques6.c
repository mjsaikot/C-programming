#include <stdio.h>
#include <string.h>
/*You will given an integer array A and the size N. 
    You will also be given an integer value X. 
    You need to tell how many times X was appeared in the array. */
int main()
{
    // Code start from here
	int n;
	scanf("%d", &n);
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}

	int x;
	scanf("%d", &x);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (ar[i] == x)
		{
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}