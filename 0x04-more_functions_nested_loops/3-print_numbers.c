#include "main.h"

/**
 * print_numbers - function prints the numbers, from 0 to 9,
 * followed by a new line
 *
 * Return: returns void
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	_putchar('\n');
}
