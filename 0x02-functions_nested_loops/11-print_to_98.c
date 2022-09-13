#include "main.h"

/**
 * print_to_98 - Function prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: Function takes a parameter n whose data type is int
 * Description: Function prints all natural numbers from n to 98,
 * followed by a new line.
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 *
 * Return: Returns all natural numbers from n to 98
 **/

void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i <= 98 ; i++)
		{
			if (i != n)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}
	putchar('\n');
}

