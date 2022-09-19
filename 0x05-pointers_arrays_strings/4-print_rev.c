#include "main.h"
/**
 * print_rev - Function prints a string, in reverse, followed by a new line.
 * @s: Parameter string pointer of char data type
 *
 * Return: Returns void
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index])
		index++;
	while (index--)
		_putchar(s[index]);
	_putchar('\n');
}
