#include "main.h"
/**
 * print_alphabet - printing a-z
 *
 * Return: No return it is void.
 */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
