#include "main.h"
/**
 * jack_bauer - printing 00:00 to 23:59
 *
 * Return: No return it is void.
 */
void jack_bauer(void)
{
	int hrs, sec;

	hrs = 0;

	while (hrs <= 23)
	{
		sec = 0;
		while (sec <= 59)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((sec / 10) + '0');
			_putchar((sec % 10) + '0');
			_putchar('\n');
			sec++;
		}
		hrs++;
	}
}
