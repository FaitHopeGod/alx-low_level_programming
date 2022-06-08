#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *
 *@c: integer parameter
 *
 * Return: integer absolute value
 */

int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c == 0)
	{
		return (0);
	}
	else
	{
		return (c * (-1));
	}
}
