#include "main.h"
/**
 *print_square - print n by n square
 *
 * Return: Nothing
 *
 * @size: integer parameter
 *
 */

void print_square(int size)
{
	if(size == 0)
		_putchar ('\n');
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			_putchar('#');
		_putchar ('\n');
	}
}
