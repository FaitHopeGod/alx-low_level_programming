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

	j = 0;

	while(*(s + j) != '\0')
		j++;


	for (i = 0; i < j-1; i++)
	{
		tmp = s[i];
		s[i] = s[j-1];
		s[j-1] = tmp;
		j--;
	}

}
