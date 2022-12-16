#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: Frist string to be compared with s2
 * @s2: Second string to be compared with s1
 *
 * Return: 0 if both strings match, otherwise, s1 - s2 if they don't match
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
}
	return (0);
}
