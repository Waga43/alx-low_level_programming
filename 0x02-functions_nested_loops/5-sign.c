#include "main.h"

/**
 * print_sign - Function prints the sign of a number.
 * @n: Function takes a parameter n whose data type is int
 * Description: Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 *
 * Return: 1 if the character is lowercase or uppercase and 0 if otherwise.
 **/

int print_sign(int n)
{


	if (n > 0)
	{
	
		return (1);
		_putchar('+');
	}

	else if (n == 0)
	{

		return (0);
		_putchar(0);
	}

	else (n < 0)
	{

		return (-1);
		_putchar('-');
	}



}

