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
	if (i % 2 == 1)
		j = i / 2;
	else
		j = (i - 1) / 2;
	for (j++; j < i; j++)
	{
		printf("%c", *(str + j));
	}
	printf("\n");

}
