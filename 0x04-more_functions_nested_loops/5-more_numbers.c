#include "main.h"

/**
 * more_numbers - function prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int x, y;

	while x < 10
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)

				_putchar(y / 10 + '0');

			_putchar(y % 10 + '0');

		}
		
		_putchar('\n');
		x++;
	}
}
