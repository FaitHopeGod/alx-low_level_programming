#include "stdio.h"
/**
 * main - Fibonachi sequence
 *
 * Return: No return it is void.
 */
int main(void)
{
	int i;
	long int f1, f2, ff, ev_ff;

	f1 = 0;
       	ev_ff = 0;
	f2 = 1;

	for(i = 0; i < 50; i++)
	{
		ff = f1 + f2;
		f1 = f2;
		f2 =ff;
		if (ff % 2 == 0 && ff < 4000000)
		{
			ev_ff = ev_ff + ff;
		}
	}
	printf("%ld\n", ev_ff);
	return (0);
}
