#include "main.h"
/**
 * _puts - Function that prints a string, followed by a new line, to stdout.
 * @str: pointer parameter of char data type
 *
 * Return: void data type is returned
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
