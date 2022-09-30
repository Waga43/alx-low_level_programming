#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: The count (number) of arguments passed when calling the function
 * @argv: char string array passed when calling the function
 * Description: If the number of arguments passed to your program is
 * not exactly 1, print Error, followed by a new line, and return 1
 * Use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * Return: zero (0) indicates the program executed - successfully
 */
int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");

		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		num_coins += 1;
	}
	printf("%d\n", num_coins);

	return (0);
}
