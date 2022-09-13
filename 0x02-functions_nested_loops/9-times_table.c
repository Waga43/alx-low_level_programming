#include "main.h"

/**
 * times_table - Function prints the 9 times table, starting with 0.
 * Description: Funtion prints the 9 times table, starting with 0.
 *
 * Return: void datatype is returned.
 **/

void times_table(void)
{
	int a, b, factor;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 10; a++)
		{
			factor = a * b;
			if (a == 0)
			{
				_putchar(factor + '0');
			}
			else if (factor >= 10)
			{
				_putchar(' ');
				_putchar(factor / 10 + '0');
				_putchar(factor % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(factor + '0');
			}
			if (a != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
