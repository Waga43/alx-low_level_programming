#include "main.h"
#include <stdlib.h>
/**
 * array_range - Function creates an array of integers
 * @min: minimum
 * @max: maximum
 * Description: The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a, i = 0, t = min;

	if (min > max)
		return (0);
	a = malloc((max - min + 1) * sizeof(int));

	if (!a)
		return (0);
	while (i <= max - min)
		a[i++] = t++;
	return (a);
}
