#include "main.h"
/**
 *_memcpy -   copies memory area
 *@dest: destination to be copied into
 *@src: Source to be copied from
 *@n: number of bytes of the memory
 *Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;

	}


	return (dest);
}
