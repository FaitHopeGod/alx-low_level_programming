#include <stdio.h>
/**
 * main - main function to print list of program parameters
 *
 * @argc : integer argument size
 *
 * @argv : array of arguments
 *
 * Return: zero(0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
