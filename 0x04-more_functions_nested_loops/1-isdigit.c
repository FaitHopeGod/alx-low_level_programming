#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Differentiate Upper Cases
 *
 * Return: Integer number
 *
 * @c: integer parameter
 */

int _isdigit(int c)
{
	int r;

	if (c >= 48 && c <= 57)
		r = 1;
	else
		r = 0;

	return (r);
}
