#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Display 0-9$
 *
 * Return: Nothing
 *
 */

void print_numbers(void)
{
	int i;

	i=0;
	while(i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	if (i == 10)
		_putchar('$');
}
