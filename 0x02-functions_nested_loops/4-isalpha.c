#include "main.h"
/**
 *_islower - identify lowercase charachters
 *
 *@c: integer parameter
 *
 * Return: 1 if it is letter, lowercase or uppercase else 0
 */

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
