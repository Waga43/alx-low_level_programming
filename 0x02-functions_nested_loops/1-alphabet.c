#include "main.h"

/**
 * print_alphabet- function that prints the alphabet letter,
 * in lowercase, followed by a new line.
 *
 * Return: zero is returned
 */

void print_alphabet(void)
{
	char alphabet_1st;

	for (alphabet_1st = 97; alphabet_1st <= 122; alphabet_1st++)
	{
		_putchar(alphabet_1st);

	}

	_putchar('\n');
}
