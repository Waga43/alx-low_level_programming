#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
 * Return: nothing
 */
void print_array(int *array, int size)
{
	int i;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}

	printf("\n");
}

/**
 * binary_search - Function searches for a value in sorted array of integers
 * using binary search method
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value:the  value to be searched for
 *
 * Return: returns the index where value is located or
 * -1 if value is not present in the array or
 * -1 if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int down = 0;
	int up = size - 1;
	int center;

	if (array == NULL || size == 0 || array[0] > value)
		return (-1);

	while (down <= up)
	{
		center = (down + up) / 2;

		print_array(&array[down], (up - down) + 1);

		if (array[center] == value)
			return (center);

		if (array[center] > value)
			up = center - 1;

		else
			down = center + 1;
	}

	return (-1);
}
