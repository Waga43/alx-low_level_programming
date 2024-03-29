#include "main.h"

/**
 * _isalpha - Function checks for alphabetic character.
 * @c: Function takes a parameter c whose data type is int
 * Description: Checks for lowercase or uppercase characters
 *
 * Return: 1 if the character is lowercase or uppercase and 0 if otherwise.
 **/

int _isalpha(int c)

{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));


}

