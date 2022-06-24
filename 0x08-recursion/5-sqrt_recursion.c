#include "main.h"
/**
 * comp_sqrt - checks integer as candidate for square root
 * @i: user input
 * @j: integer start from 1
 * Return: result
 */

int comp_sqrt(int i, int j)
{
		if (j * j == i)
			return (j);
		else if (j > i / j)
			return (comp_sqrt(i, j - 1)
		else if (j < i / j)
			return (comp_sqrt(i, j + 1));
		else
			return (-1);
}

/**
 * _sqrt_recursion -  natural square root of a number
 *
 * @n: number
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
		int a;

		a = 1;
		if (n < 0)
			return (-1);
		else if (n == 1)
			return (1);
		else
			return (comp_sqrt(n, a));

}
