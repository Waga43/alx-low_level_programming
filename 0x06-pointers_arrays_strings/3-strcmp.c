#include "maini.h"
/**
 * _strcmp - compares two strings
 * @s1: Frist string to be compared with s2
 * @s2: Second string to be compared
 *
 * Return: 0 if both strings match, otherwise, s1 - s2 if they don't match
*/

int _strcmp(char *s1, char *s2)
{
int i;

/**
 * We have reached the end of S1 OR we have reached the end of S2
 * 
*/

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
}
return (0);
}
