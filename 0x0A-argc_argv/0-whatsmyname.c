#include <stdio.h>

/**
 * main - Function print the name of the program
 * @argc: The count of arguments used when calling the function
 * @argv: Array of char strings of the arguments used when calling the program
 *
 * Return: zero 0 indicates success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
