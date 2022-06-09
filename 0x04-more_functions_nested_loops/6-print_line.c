#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *print_line - print n distance line
 *
 * Return: Nothing
 *
 * @n: integer parameter
 *
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar ('\n');
}
