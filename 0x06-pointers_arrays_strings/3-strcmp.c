#include "main.h"
/**
 * _strcmp- copy strings
 *
 * @s1: destination char variable
 * @s2: source char variable
 *
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, res;

	i = 0;
	j = 0;

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	if (i < j)
		res = -15;
	else if (i == j)
		res = 0;
	else
		res = 15;
	return (res);

}
