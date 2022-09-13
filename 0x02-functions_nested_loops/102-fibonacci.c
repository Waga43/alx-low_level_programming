#include <stdio.h>
/**
 * main - main function prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 *
 * Return: zero is returned
 */
int main(void)
{
	int count = 2;
	long int x = 1;
	long int y = 2;
	long int z;

	printf("%lu, ", x);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}

		z = y;
		y += x;
		x = z;
		count++;
	}

	return (0);
}
