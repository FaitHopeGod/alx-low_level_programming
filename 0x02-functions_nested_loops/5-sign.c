#include "main.h"
/**
 *print_sign - identify Postive & Negative number and print sign
 *
 *@c: integer parameter
 *
 * Return: 1 if it is Positive, -1 if it is Negative, else 0
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
