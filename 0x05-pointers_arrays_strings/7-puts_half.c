#include "main.h"

/**
 * puts_half - Function prints half of a string, followed by a new line.
 * @str: Pointer parameter of char data type
 * Description: The function should print the second half of the string
 * If the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 *
 * Return: void is returned
 */
void puts_half(char *str)
{
	int index = 0, i;

	while (index >= 0)
	{
		if (str[index] == '\0')
			break;
		index++;
	}

	if (index % 2 == 1)
		i = index / 2;
	else
		i = (index - 1) / 2;

	for (i++; i < index; i++)
		_putchar(str[i]);
	_putchar('\n');
}
