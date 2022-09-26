#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: Pointer parameter of int type
 * @size: size parameter of type int
 */

void print_diagsums(int *a, int size)
{

	int x;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	x = 0;
	while (x < size)
	{

		sum1 = sum1 + *(a + x * size + x);
		sum2 = sum2 + *(a + x * size + size - x - 1);

		x++;
	}

	printf("%d, %d\n", sum1, sum2);

}
