#include <stdio.h>

/**
 * main - function block
 * Description- program prints all the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: zero returned
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		putchar (x + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar (y);
	}

putchar('\n');
return (0);
}
