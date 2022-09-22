#include "main.h"

/**
 * leet - Function encodes a string into 1337
 * @str: Pointer String char parameter to encode
 * Description: Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: newly encoded str
 */

char *leet(char *str)
{
	int i, ii;
	char str1[] = "aeotl";
	char Str1[] = "AEOTL";
	char str2[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (str[i] == str1[ii] || str[i] == Str1[ii])
			{
				str[i] = str2[ii];
				break;
			}
		}
	}
	return (str);
}
