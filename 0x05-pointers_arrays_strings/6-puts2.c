#include "main.h"

/**
 * puts2 - Function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: Pointer parameter of char data type
 *
 * Return: void is returned
 */

void puts2(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
{
	if (index % 2 == 0)
	_putchar (str[index]);
}

	_putchar ('\n');
}
