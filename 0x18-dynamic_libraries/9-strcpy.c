#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: Pointer parameter of char data type- the destination
 * @src: Pointer parameter of char data type- the source
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
