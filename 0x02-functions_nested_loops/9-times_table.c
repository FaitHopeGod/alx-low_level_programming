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
		for (j = 0; j <= 9; j++)
		{
			if (i != 9 || j != 9)
				printf("%d,\t", i * j);
			else
				printf("%d", i * j);
			printf("\n");
		}

}
