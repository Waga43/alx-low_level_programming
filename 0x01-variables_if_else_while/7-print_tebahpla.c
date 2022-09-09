#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - function block
 * Description: Script prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: zero returned
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
