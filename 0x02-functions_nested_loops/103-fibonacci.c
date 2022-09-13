#include <stdio.h>
/**
 * main - main function finds and prints the sum of the
 * even-valued terms, followed by a new line.
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 *
 * Return: zero returned
 */
int main(void)
{
	int x = 1;
	int y = 2;
	int total = 0;
	int z;

	while (y < 4000000)
	{
		if (y % 2 == 0)
			total += y;
		z = y;
		y += x;
		x = z;
	}
	printf("%d\n", total);
	return (0);
}
