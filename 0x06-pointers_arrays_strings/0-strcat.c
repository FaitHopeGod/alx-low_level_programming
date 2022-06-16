#include "main.h"
/**
 * _strncat- concatenates two strings
 * @dest: destination char variable
 * @src: source char variable
 */
char *_strcat(char *dest, char *src)
{
	int i, d_sz, s_sz;
	
	d_sz = 0;
	s_sz = 0;
	i = 0;

	while (*(dest + i) != '\0')
		d_sz++;
	while (*(src + i) != '\0')
		s_sz++;

	while (d_sz < (d_sz + s_sz) && d_sz < (d_sz + s_sz))
	{
		*(dest + des_sz) = *(src + i);
		d_sz++;
		i++;
	}
	return (*dest);

}
