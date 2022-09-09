#include <stdio.h>
/**
 * main - function block
 * Description: Script prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: zero returned
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
