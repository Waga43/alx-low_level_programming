#include "main.h"

/**
 * reverse_array - Program reverses the content of an array of integers.
 * @a: The array of ints to be reversed.
 * @n: The number (int) of elements in the array.
 *
 * Return: returns void
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
