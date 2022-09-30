#include <stdio.h>
/**
 * main - Function prints the number of arguments passed into it.
 * @argc: The count (number) of arguments used when calling the function
 * @argv: char array string used when calling the function
 *
 * Return: zero 0 indicates successful program execution.
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
