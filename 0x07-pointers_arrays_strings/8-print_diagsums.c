#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print additions of the two diagonals.
 * @a: source 
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sd1 = 0, sd2 = 0, stp1, stp2;

	for (i = 0; i <= (size - 1); i++)
	{
		stp1 =  (size + 1) * i;
		sd1 = sd1 + *(a + stp1);
	}

	for (j = 1; j <= size; j++)
	{
		stp2 = (size - 1) * j;
		sd2 = sd2 + *(a + stp2);
	}
	printf("%d, %d\n", sd1, sd2);
}
