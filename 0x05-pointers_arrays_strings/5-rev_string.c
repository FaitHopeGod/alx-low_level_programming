#include "main.h"
#include <stdio.h>
/**
 * rev_string- print a string in reverse order
 *
 * @s: character pointer
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	j = 8;

	for (i = 0; i <= 8; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}

}
