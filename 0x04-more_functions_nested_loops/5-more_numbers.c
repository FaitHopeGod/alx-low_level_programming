#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *most_numbers - Display 0-14 x10
 *
 * Return: Nothing
 *
 */

void most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
	_putchar ('\n');
	}
}
