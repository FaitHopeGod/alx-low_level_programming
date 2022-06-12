#include "stdio.h"
/**
 * main - Fibonachi sequence
 *
 * Return: No return it is void.
 */
int main(void)
{
	long int f1, f2, ff;

	f1 = 2;
	f2 = 4;
	ff = f1 + f2;
	while (ff < 4000000)
	{
		f1 = f2;
		f2 = ff;
		ff = f1 + f2;

	}
	printf("%ld\n", ff);
	return (0);
}
