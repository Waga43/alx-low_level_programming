#include <stdio.h>

/**
 * main- Function computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded),
 *
 * Description: Prints the multiples of 3 and 5  between 0 and 1024 (excluded)
 *
 * Return: Zero returned
 */

int main(void)
{
	int start_num, end_num, total;

	end_num = 1024;
	total = 0;

	for (start_num = 0; start_num < end_num; start_num++)
	{
		if ((start_num % 3 == 0) || (start_num % 5 == 0))
		{
			total = total + start_num;
		}
		else
		{
			continue;
		}
	}

	printf("%d", total);
	printf("\n");

	return (0);
}
