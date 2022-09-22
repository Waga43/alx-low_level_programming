#include "main.h"

/**
 * print_number - Function prints an integer.
 * @n: Parameter n is the integer to be printed.
 *
 * Return: void is returned
 */

void print_number(int x)
{
	unsigned int num = x;

	if (x < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
