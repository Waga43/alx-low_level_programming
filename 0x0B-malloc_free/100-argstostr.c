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
	int w, x, y, za;

	if (ac == 0)
		return (NULL);

	for (w = x = 0; x < ac; x++)
	{
		if (av[x] == NULL)
			return (NULL);

		for (y = 0; av[x][y] != '\0'; y++)
			w++;
		w++;
	}

	aout = malloc((w + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (x = y = za = 0; za < w; y++, za++)
	{
		if (av[x][y] == '\0')
		{
			aout[za] = '\n';
			x++;
			za++;
			y = 0;
		}
		if (za < w - 1)
			aout[za] = av[x][j];
	}
	aout[za] = '\0';

	return (aout);
}
