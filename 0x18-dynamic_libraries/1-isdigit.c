#include "main.h"

/**
 * _isdigit - function checks for a digit (0 through 9)
 * @c: checks a parameter named c of int data type
 *
 * Return: returns 1 if c is a digit, and 0 if it's not
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
