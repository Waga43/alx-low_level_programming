#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 * the byte position, then showing the hex content,
 * then displaying printable charcaters.
 * @b: The buffer to be printed, of char data type
 * @size: The buffer prints the content of size bytes of
 * the buffer pointed by b
 * Description: The output should print 10 bytes per line
 * Each line starts with the position of the first byte of the
 * line in hexadecimal (8 chars), starting with 0
 * Each line shows the hexadecimal content (2 chars) of the
 * buffer, 2 bytes at a time, separated by a space
 * Each line shows the content of the buffer. If the byte
 * is a printable character, print the letter, if not, print .
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 *
 */

void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf("  ");
			else
				printf("%02x", *(b + index + byte));
			if ((index % 2) != 0 && index != 0)
				printf(" ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;
			else if (*(b + index + byte) >= 31 &&
				 *(b + index + byte) <= 126)
				printf("%c", *(b + index + byte));
			else
				printf(".");
		}
		if (byte >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
