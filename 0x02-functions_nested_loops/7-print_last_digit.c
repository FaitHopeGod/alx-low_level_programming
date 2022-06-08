#include "main.h"
/**
 *print_last_digit - program that return last digit of an integer
 *
 *@c: integer parameter
 *
 * Return: integer last digit value
 */

int print_last_digit(int c)
{
	if (c >= 0)
	{
		c = c % 10;
		return (c);
	}
	else
	{
		c = ((c * -1) % 10);
		return (c);
	}
}
