#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: This is the C string to be searched.
 * @accept:character in str1 that matches one of the characters in str2
 *
 * Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (*s == accept[x])
			{
				return (s);
			}

			x++;
		}

		s++;
	}
	return (0);

}
