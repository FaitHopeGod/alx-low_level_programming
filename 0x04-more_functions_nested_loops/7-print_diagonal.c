#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *print_diagonal - print n distance line
 *
 * Return: Nothing
 *
 * @n: integer parameter
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar ('\n');
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			_putchar(' ');
			if (j == i)
				_putchar('\\');
		}
		_putchar ('\n');
	}
}
