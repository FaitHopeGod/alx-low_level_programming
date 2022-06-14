#include "main.h"
#include <stdio.h>
/**
 * print_array- prints second half string
 *
 * @a: integer pointer
 * @n: integer nth
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j != n - 1)
			printf("%d, ", *(a + j));
		else if (j == n - 1)
			printf("%d", *(a + j));
	}
	printf("\n");

}
