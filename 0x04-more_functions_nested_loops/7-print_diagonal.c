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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n')
			}
			else
				_putchar(' ');
		}
	}
}
