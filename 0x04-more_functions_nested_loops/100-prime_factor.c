#include <stdio.h>
#include <math.h>

/**
 * main - Function finds and prints the largest prime factor
 * of the number 612852475143 followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int num;
	long int max;
	long int x;

	num = 612852475143;
	max = -1;

	while (num % 2 == 0)
	{
		max = 2;
		num /= 2;
	}
	for (x = 3; x <= sqrt(num); x += 2)
	{
		while (num % x == 0)
		{
			max = x;
			num = num / x;
		}
	}
	if (num > 2)
		max = num;

	printf("%ld\n", max);

	return (0);
}
