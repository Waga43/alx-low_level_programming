#include <stdio.h>
/**
 * main - function block
 * Description: Print the alphabet in lowercase, followed by a new line
 *
 * Return: zero returned
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
