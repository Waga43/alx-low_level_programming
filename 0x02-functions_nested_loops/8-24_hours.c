#include "main.h"

/**
 * jack_bauer- Function prints every minute of the day of Jack Bauer.
 * Description: This is a function that prints every minute of the
 * day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: Function returns all the time in hr:min of the day (24hrs)
 */

void jack_bauer(void)
{


	int min, hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}

}
