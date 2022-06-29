#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function to print the addition of arguments
 *
 * @argc : integer argument size
 *
 * @argv : array of arguments
 *
 * Return: zero(0)
 */

int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc < 1)
		return (0);
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
