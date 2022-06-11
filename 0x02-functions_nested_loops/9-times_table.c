#include "main.h"
/**
 * times_table - printing 00:00 to 23:59
 *
 * Return: No return it is void.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
				_putchar(i * j + '0');
			else
			{
				if (i * j <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(i * j + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}

			}
		}
		_putchar('\n');
	}
}
