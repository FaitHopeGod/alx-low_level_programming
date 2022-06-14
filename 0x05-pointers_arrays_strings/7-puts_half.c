#include "main.h"
#include <stdio.h>
/**
 * puts_half- prints second half string
 *
 * @str: character pointer
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (*(str + i) != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else if (i % 2 != 0)
		j = (i - 1) / 2;
	while (j < i)
	{
		printf("%c", *(str + j));
		j++;
	}
	printf("\n");

}
