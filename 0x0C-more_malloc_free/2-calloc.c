#include "main.h"
#include <stdlib.h>

/**
 * _memset - copy char
 * @s: char string pointer parameter
 * @b: char input parameter
 * @n: int bytes
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - The _calloc function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: n elements
 * @size: bytes
 * Description: The memory is set to zero. If nmemb or size is 0, then _calloc
 * returns NULL. If malloc fails, then _calloc returns NULL
 *
 * Return: a void type pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}
