#include <stdio.h>
/**
 *print_to_98 - computes the sum of two an integer
 *
 *@n: integer parameter
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	else if (n > 98)
	{
		printf("%d, ", n)
		n--;
	}
	else if (n == 98)
		printf("%d", n);
}
