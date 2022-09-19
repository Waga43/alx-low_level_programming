#include "main.h"
/**
 * rev_string - Function  reverses a string.
 * @s: Parameter string to be reversed
 *
 * Return: void data type is returned
 */

void rev_string(char *s)
{
	char *c = s;
	char str[2000];
	int index = 0;

	while (*s != '\0')
	{
		str[index] = *s;
		s++;
		index++;
	}
	index = 0;

	while (s > c)
	{
		s--;
		*s = str[index];
		index++;
	}
}
