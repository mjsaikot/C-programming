#include <stdio.h>

/*Suppose there are M1 workers who can complete a work in D days. Unfortunately,
some of them became sick before the start of the work, and now there are M2 workers.
Can you tell how many days it will take for them to complete the work?*/
int main()
{
	// Write C code here
	int m1, m2, d;
	scanf("%d %d %d", &m1, &m2, &d);
	int sum;
	sum = (m1 *d) / m2;
	printf("%d", sum);

	return 0;
}