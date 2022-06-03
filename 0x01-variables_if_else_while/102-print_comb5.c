#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x != 100; x++)

		for (y = 0; y != 100; y++)
			if (y > x)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(32);
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(32);
				}
			}
	putchar('\n');
	return (0);
}
