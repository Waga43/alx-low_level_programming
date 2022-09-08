#include<unistd.h>
/**
 * main - prints a sentence to the standard error followed by a newline
 *
 * Return: returns one
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
