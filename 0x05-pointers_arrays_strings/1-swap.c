#include "main.h"
/**
 * swap_int - Program that swaps the values of two integers.
 * @a: First pointer parameter
 * @b: Second pointer parameter
 *
 * Return: zero is returned
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

