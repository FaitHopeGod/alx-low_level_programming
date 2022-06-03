#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int x;

	for (x = 10; x <= 99; x++)
	{
		putchar(x);
		putchar(', ');
	}
	return (0);
}
