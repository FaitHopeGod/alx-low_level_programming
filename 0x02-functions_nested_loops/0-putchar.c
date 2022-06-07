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

	pu[0] = '_';
	pu[1] = 'p';
	pu[2] = 'u';
	pu[3] = 't';
	pu[4] = 'c';
	pu[5] = 'h';
	pu[6] = 'a';
	pu[7] = 'r';
	for (int i = 0; i < 8; i++)
	{
		_putchar(pu[i]);
	}

	return (0);
}
