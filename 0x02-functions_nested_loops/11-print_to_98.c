#include "main.h"
/**
 *print_to_98 - computes the sum of two an integer
 *
 *@n: integer parameter
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		if (n < 10)
		{
		_putchar(n % 10 + '0');
		_putchar(',');
		}
		else if (n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
		}
		n++;
	}
}
