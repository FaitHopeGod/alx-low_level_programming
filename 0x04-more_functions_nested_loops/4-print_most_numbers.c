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
	for (int i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar ('\n');
}
