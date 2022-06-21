#include "main.h"
/**
 * _memset- fills the first n bytes of the memory area
 *
 * @s:source
 * @b:constant byte
 * @n:buffer size
 *
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

