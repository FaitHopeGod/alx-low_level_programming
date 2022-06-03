#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	int x, n;
	char z;
	z = 'z';
	n = 0;
	for (x = 'a'; x <= z; x++)
	{
		putchar(x);
		if (x == z && n == 0)
		{	
			n = 1;
			x = '@';
			z = 'Z';
		}
	}
	putchar('\n');
	return (0);
}
