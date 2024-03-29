#include "main.h"
/**
 * _strncat - Function concatenates two strings
 * @dest: A pointer to a char variable that is the destination string
 * @src: A pointer to a char variable that is the source string
 * @n: Parameter of int data type
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
{
	i++;
}

	j = 0;
	while (j < n && src[j] != '\0')
{
	dest[i] = src[j];
	j++;
	i++;
}

	dest[i] = '\0';

	return (dest);
}
