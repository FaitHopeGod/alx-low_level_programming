#include <stdio.h>
#include "main.h"
/**
 *print_most_numbers - Display 0-9 without 2 and 4
 *
 * Return: Nothing
 *
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i != 2 && i != 4 && i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar ('\n');
}
