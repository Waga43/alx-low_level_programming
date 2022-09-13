#include "main.h"

/**
 * print_last_digit- Function prints the last digit of a number.
 * @digit: Parameter taken by the function with dasta type int
 * Description: This is a function that returns the lst digit of a number
 *
 * Return: Funtion returns the value of the last digit of a number
 */

int print_last_digit(int num)

{


	int last_digit;

	if (num < 0)
	{
		last_digit = -1 * (num % 10);
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = num % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}

}

