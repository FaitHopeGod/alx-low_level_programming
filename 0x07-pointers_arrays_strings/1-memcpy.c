#include "main.h"
/**
 * _memcpy- fills the first n bytes of the memory area
 *
 * @dest: destination
 * @src: source
 * @n: buffer size
 *
 * Return: character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

