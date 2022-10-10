#include <stdio.h>

/**
 * main - Function prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: zero (0) indicating successful execution
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
