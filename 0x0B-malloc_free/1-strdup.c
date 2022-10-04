#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string parameter
 * Description: The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc, and can be freed with
 * free. Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	strout = (char *)malloc(sizeof(char) * (a + 1));

	if (strout == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		strout[b] = str[b];

	return (strout);
}
