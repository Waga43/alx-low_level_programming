#include "main.h"

/**
 * print_alphabet_x10 - function returns void data type. See description below
 * Description: Prints 10 times the alphabet, in lowercase, followed by a
 * new line  on the screen using the _putchar function prototype declared
 * in the main.h header file
 *
 * Return: zero is returned
 */

void print_alphabet_x10(void)
{

	int alphabet_1st;
	int count = 0;

	while (count < 10)
	{
		for (alphabet_1st = 97; alphabet_1st <= 122; alphabet_1st++)
		{

			_putchar(alphabet_1st);
		}


	count++;
	_putchar('\n');

	}

}
