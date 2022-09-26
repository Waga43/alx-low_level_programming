#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard.
 * @a: parameter of char type
 */
void print_chessboard(char (*a)[8])
{

	int x = 0;

	while (x < 8)
	{
		int y = 0;
		
		while (y < 8)
		{
			_putchar (a[x][y]);
			y++;
		}
		_putchar ('\n');
		x++;
	}

}
