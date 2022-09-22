#include "main.h"
/**
 * rot13 - Function encodes a string using rot13
 * @str: String char paramenter to encode.
 *
 * Return: the pointer to dest.
 */

char *rot13(char *str)
{
	int count = 0;
	int index;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + count) != '\0')
	{
		for (index = 0; index < 52; index++)
		{
			if (*(str + count) == letters[index])
			{
				*(str + count) = rot13[index];
				break;
			}
		}
		count++;
	}

	return (str);
}
