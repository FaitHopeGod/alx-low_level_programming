#include "main.h"
/**
 * _pow_recursion - compute factorial of a number
 *
 * @x: number
 * @y: power to be multiplied
 *
 * Return: result of x pow y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));

}
