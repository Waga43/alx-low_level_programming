#include "main.h"
/**
 * _memset -   fills memory with a constant byte
 * @s: pointer parameter of char data type- block of memory to fill
 * @b: char parameter value to set
 * @n: unsigned int parameter- bytes of the memory
 * Description: The _memset() function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(s + index) = b;

	}

	return (s);
}
