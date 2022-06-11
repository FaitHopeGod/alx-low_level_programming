#include <stdio.h>
#include "main.h"
/**
 * _isupper - Differentiate Upper Cases
 *
 * Return: Integer number
 *
 * @c: integer parameter
 */

int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
		r = 1;
	else
		r = 0;

	return (r);
}
