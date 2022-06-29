#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function to print the amount of coin needed for change
 *
 * @argc : integer argument size
 *
 * @argv : array of arguments
 *
 * Return: zero(0)
 */

int main(int argc, char **argv)
{
	int coins, i, amount;
	int value[5] = {25, 10, 5, 2, 1};

	coins = 0;
	amount = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (amount <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (value[i] <= amount)
			{
				coins = coins + (amount / value[i]);
				amount = amount - (amount / value[i]) * value[i];
				if (amount == 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}
