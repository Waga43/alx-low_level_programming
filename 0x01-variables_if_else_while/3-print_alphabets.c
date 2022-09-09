#include <stdio.h>
/**
 * main - function  block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
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

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
