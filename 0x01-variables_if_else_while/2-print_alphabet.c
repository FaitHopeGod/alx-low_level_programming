#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for(int x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (int x = 'A'; x <='Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
