#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Function concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Description: The returned pointer shall point to a newly allocated space
 * in memory, which contains s1, followed by the first n bytes of s2,
 * and null terminated. If the function fails, it should return NULL.
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

return (p);
}
