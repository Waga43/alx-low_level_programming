#include <stdio.h>
#include <stdlib.h>
/**
 * main - function block
 * Description: Get a random number and check its last digit, compare it with 5
 *
 * Return: zero is returned
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
