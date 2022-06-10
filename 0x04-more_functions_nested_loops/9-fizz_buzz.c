#include <stdio.h>
/**
 * main - Entry Point
 * print_fizz_buzz - Display number with fizz buzz order
 * return: Always zero 0
*/
void print_fizz_buzz(void)
{
	int i;
	for (i=0; i<=100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d",i);
		printf(" ");
	}


}

int main(void)
{
	print_fizz_buzz();
	return (0);
}
