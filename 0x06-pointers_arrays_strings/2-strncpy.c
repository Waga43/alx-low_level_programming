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
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}

	while (i < n)
{
	dest[i] = '\0';
	i++;
}

return (dest);

}

