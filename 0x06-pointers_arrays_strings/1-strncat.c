#include "main.h"
/**
 * _strncat- concatenates two strings
 *
 * @dest: destination char variable
 * @src: source char variable
 * @n: number of byte
 *
 * Return: concatenated character
 */
char *_strncat(char *dest, char *src, int n);
{
	int i, d_sz;

	i = 0;
	d_sz = 0;
	while (*(dest + d_sz) != '\0')
		d_sz++;

	while (src[i] != '\0')
	{
		dest[d_sz] = src[i];
		d_sz++;
		i++;
	}
	dest[d_sz] = '\0';
	return (dest);

}
