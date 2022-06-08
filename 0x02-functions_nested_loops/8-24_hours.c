#include "main.h"
/**
 * jack_bauer - printing 00:00 to 23:59
 *
 * Return: No return it is void.
 */
void jack_bauer(void)
{
	for (int hrs = 0; hrs <= 23; hrs++)
	{
		for (int sec = 0; sec <= 59; sec++)
		{
			if (hrs < 10 && sec < 10)
				_putchar('0' + hrs + ':' + '0' + sec);
			else if (hrs < 10 && sec >= 10)
				_putchar('0' + hrs + ':' + sec);
			else if (hrs >= 10 && sec < 10)
				_putchar(hrs + ':' + '0' + sec);
			else if (hrs >= 10 && sec >= 10)
				_putchar(hrs + ':' + sec);
		}
	}
}
