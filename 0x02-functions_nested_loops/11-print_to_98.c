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
		if (n >=0 && n < 10)
		{
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
		}
		else if (n < 0)
		{
			if (n > -100)
			{
				_putchar('-');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else 
			{
				_putchar('-');
				_putchar(n / 100 + '0');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}

		}
		else if (n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		n++;
	}

	while (n > 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n--;
	}

	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}

}