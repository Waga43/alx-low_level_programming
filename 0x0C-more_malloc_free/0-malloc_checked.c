#include "main.h"

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: number of memory bytes to allocate
 * Description: If malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
