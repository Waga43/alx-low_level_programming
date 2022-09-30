#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Function adds positive numbers.
 * @argc: The count (number) of arguments passed when calling the function
 * @argv: char string array passed when calling the function
 * Description: If no number is passed to the program, print 0,
 * followed by a new line
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * Assume that numbers & the addition of all the numbers
 * can be stored in an int
 *
 * Return: zero (0) incicates the program executed successfully
 */

int main(int argc, char *argv[])
{
	int x, y, add = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");

				return (1);
			}
		}
		add += atoi(argv[x]);
	}
	printf("%d\n", add);

	return (0);
}
