#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function to print the multiplication of arguments
 *
 * @argc : integer argument size
 *
 * @argv : array of arguments
 *
 * Return: zero(0)
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
			res = res * atoi(argv[i]);
		printf("%d\n", res);
		return (res);
	}
}
