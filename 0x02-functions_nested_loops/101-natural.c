#include "stdio.h"
/**
 * main - printing n's time table
 *
 * Return: No return it is void.
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
