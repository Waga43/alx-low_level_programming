#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function concatenates two strings.
 * @s1: first string parameter
 * @s2: second string parameter
 * Description: The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1, followed by the contents of s2,
 * and null terminated. If NULL is passed, treat it as an empty string
 *
 * Return: pointer of an array of chars and returns NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int a, b, c, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	strout = malloc(sizeof(char) * (a + b + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		strout[c] = s1[c];

	limit = b;
	for (b = 0; b <= limit; c++, b++)
		strout[c] = s2[b];

	return (strout);
}
