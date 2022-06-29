#include "main.h"
/**
 * factorial - compute factorial of a number
 *
 * @n: number to be calculat factorial
 *
 * Return: value of factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
