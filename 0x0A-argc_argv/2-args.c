#include <stdio.h>
/**
 * main - Function prints all arguments it receives.
 * @argc: The count (number) of arguments passed when calling the function
 * @argv: char string array passed when calling the function
 * Description: All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * Return: zero (0) indicates successful execution of program
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);
}
