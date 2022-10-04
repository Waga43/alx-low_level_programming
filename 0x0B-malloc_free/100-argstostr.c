#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 * Description: Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c, x, y, xa;

	if (ac == 0)
		return (NULL);

	for (c = x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
			return (NULL);

		for (y = 0; av[x][y] != '\0'; y++)
			c++;
		c++;
	}

	aout = malloc((w + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (x = y = xa = 0; xa < c; y++, xa++)
	{
		if (av[x][y] == '\0')
		{
			aout[xa] = '\n';
			x++;
			xa++;
			y = 0;
		}
		if (xa < c - 1)
			aout[xa] = av[x][j];
	}
	aout[xa] = '\0';

	return (aout);
}
