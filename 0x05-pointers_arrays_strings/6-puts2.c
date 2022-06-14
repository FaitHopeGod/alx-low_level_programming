#include "main.h"
#include <stdio.h>
/**
 * puts2- prints character of a string, starting from first character,
 *
 * @str: character pointer
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			printf("%c", *(str + i));
		i++;
	}
	printf("\n");

}
