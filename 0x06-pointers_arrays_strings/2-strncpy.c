#include "holberton.h"

/**
 * _strncpy - Function that copies a string.
 * @dest: char pointer variable to the destination string
 * @src: char pointer variable to the source string
 * @n: int parameter
 *
 * Return: A char string is returned
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
