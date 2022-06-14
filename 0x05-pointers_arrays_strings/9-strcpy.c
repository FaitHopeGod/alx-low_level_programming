#include "main.h"
#include <stdio.h>
/**
 * _strcpy- copy from source to the destination
 *
 * @dest: character pointer
 * @src: character pointer
 *
 * Return: character
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;
	i = 0;
	j = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);

}
