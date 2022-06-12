#include "stdio.h"
/**
 * main - Fibonachi sequence
 *
 * Return: No return it is void.
 */
int main(void)
{
	long int f1, f2, ff;

	f1 = 0;
	f2 = 1;
	ff = f1 + f2;
	while (ff <= 4000000)
	{
		printf("%ld, ", ff);
		f1 = f2;
		f2 = ff;
		ff = f1 + f2;

	}
	return (0);
}
