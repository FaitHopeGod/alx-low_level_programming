#include "main.h"
/**
 *print_square - print n by n square
 *
 * Return: Nothing
 *
 * @n: integer parameter
 *
 */

void print_square(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			_putchar('#');
		_putchar ('\n');
	}
}
