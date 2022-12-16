#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: String parameter to return its length
 *
 * Return: length of the string is returned as an int
 */

int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen])
		strlen++;
	return (strlen);
}
