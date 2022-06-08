#include "main.h"
/**
 * jack_bauer - printing 00:00 to 23:59
 *
 * Return: No return it is void.
 */
void jack_bauer(void)
{
	int hrs, sec;

	hrs, sec = 0;

	while (hrs <= 23)
	{
		while (sec <= 59)
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
