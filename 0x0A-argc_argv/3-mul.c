#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function multiplies two numbers.
 * @argc: The count (number) of arguments used when calling the function.
 * @argv: char string array used when calling the function
 * Description: Program should print the result of the multiplication,
 * followed by a new line
 * Assume that the two numbers and result of the multiplication can be
 * stored in an integer
 * If the program does not receive two arguments, your program should print Error,
 * followed by a new line, and return 1
 *
 * Return: zero (0) indicates successful execution of program
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int z = x * y;

	printf("%d\n", z);

	return (0);
}
