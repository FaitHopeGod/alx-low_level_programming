#include "main.h"
/**
 * _strcat- concatenates two strings
 *
 * @dest: destination char variable
 * @src: source char variable
 *
 * Return: concatenated character
 */
char *_strcat(char *dest, char *src)
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
