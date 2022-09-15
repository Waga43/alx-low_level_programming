#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: parameter is named size and is an integer
 * Description: If size is 0 or less, the function should print only a new line
 * The character # is used to print the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, y;

		for (x = 1; x <= size; x++)
		{
			for (y = x; y < size; y++)
			{
				_putchar(' ');
			}

			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
