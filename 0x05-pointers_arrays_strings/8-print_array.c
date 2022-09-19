#include "main.h"
#include <stdio.h>

/**
 * print_array - Function prints n elements of an array of integers,
 * followed by a new line.
 * @a: Pointer parameter of int data type representing number
 * of elements of the array to be printed
 * @n: Parameter of int data type representing the number of elements of
 * an array of integers to be printed
 * Description: Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as they are
 * stored in the array.
 *
 * Return: void datatype is returned
 */
void print_array(int *a, int n)
{
	int count = 0;

	for (; count < n; count++)
	{
		printf("%d", *(a + count));
		if (count != (n - 1))
			printf(", ");
	}
	printf("\n");
}
