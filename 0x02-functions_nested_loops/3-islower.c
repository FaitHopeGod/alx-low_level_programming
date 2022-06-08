#include "main.h"
/**
 * _islower - identify lowercase charachters
 *
 *@c: integer parameter
 * Return: 1 if it is lowercase else 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
