#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a : integer pointer
 * @b : integer pointer
 *
 * Return : Nothing is is void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
