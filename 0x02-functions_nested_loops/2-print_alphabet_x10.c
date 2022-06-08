#include "main.h"
/**
 * print_alphabet - printing a-z
 *
 * Return: No return it is void.
 */
void print_alphabet_x10(void)
{
	char alph;
	int i;

	i = 0;
	while (i < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
