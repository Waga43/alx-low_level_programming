#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - function block
 * Description: Program prints all single digit numbers of base 10
 * starting from 0.
 *
 * Return: zero returned
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
