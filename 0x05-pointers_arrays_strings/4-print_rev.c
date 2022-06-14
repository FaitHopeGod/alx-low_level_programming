#include "main.h"
#include <stdio.h>
/**
 * print_rev- print a string in reverse order
 *
 * @s: character pointer
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	i = i - 1;
	while (i >= 0)
	{
		printf("%c", *(s + i));
		i--;
	}
	printf("\n");
}
