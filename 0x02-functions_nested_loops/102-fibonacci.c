#include "stdio.h"
/**
 * main - Fibonachi sequence
 *
 * Return: No return it is void.
 */
int main(void)
{
	int i, n;
	long int f1, f2, ff;

	n = 50;
	f1 = 0;
	f2 = 1;
	ff = f1 + f2;

	printf("%ld, %ld, ", f1, f2);

	for (i = 3; i <= n; ++i)
	{
		printf("%ld, ", ff);
		f1 = f2;
		f2 = ff;
		ff = f1 + f2;

	}
	return (0);
}
