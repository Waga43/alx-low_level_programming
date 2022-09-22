#include "main.h"

/**
 * leet - Function encodes a string into 1337
 * @str: String characters to encode
 *
 * Description: Letters a and A should be replaced by 4,
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: newly encoded str characters
 */

char *leet(char *str)
{
	int i, ii;
	char str1[] = "aeotl";
	char Str1[] = "AEOTL";
	char str2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (s[i] == s1[ii] || s[i] == S1[ii])
			{
				s[i] = s2[ii];
				break;
			}
		}
	}
	return (s);
}
