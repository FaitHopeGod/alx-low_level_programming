#include "main.h"
/**
 * _strncpy- copy strings
 *
 * @dest: destination char variable
 * @src: source char variable
 * @n: number of byte
 *
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);

}
