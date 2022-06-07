#include <stdio.h>
#include "main.h"
/**
 * main - main function to print _putchar
 *
 * Return: Always return (0)
 */

int main(void)
{
	char pu[8];
	int i;

	pu[0] = '_';
	pu[1] = 'p';
	pu[2] = 'u';
	pu[3] = 't';
	pu[4] = 'c';
	pu[5] = 'h';
	pu[6] = 'a';
	pu[7] = 'r';
	i = 0;

	while (i < 8)
	{
		_putchar(pu[i]);
		i++;
	}

	return (0);
}
