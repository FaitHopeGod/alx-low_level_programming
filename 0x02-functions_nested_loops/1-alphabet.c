#include "main.h"
/**
 * main - that call print_alphabet function
 *
 * Return: Always return (0)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
