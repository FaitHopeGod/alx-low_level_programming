#include "main.h"
/**
 * print_times_table - printing n's time table
 *
 * @n: integer parameter from Entry point
 *
 * Return: No return it is void.
 */
void print_times_table(int n)
{
	int i, j;
	
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
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
						_putchar(' ');
						_putchar(i * j + '0');
					}
					else if (i * j > 9 && i * j <= 99)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((i * j) / 10 + '0');
						_putchar((i * j) % 10 + '0');
					}
					else
					{
					_putchar(',');
					_putchar(' ');
					_putchar((i * j) / 100 + '0');
					_putchar(((i * j) % 100) / 10 + '0');
					_putchar(((i * j) % 100) % 10 + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
	else
		break;	
