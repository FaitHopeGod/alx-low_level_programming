#include "main.h"
/**
 * _strlen- returns the length of given number
 *
 * Return: integer i
 *
 * @s: integer pointer
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	return (i);
}
