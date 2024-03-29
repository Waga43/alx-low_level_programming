#include "main.h"
/**
 * _islower - Function checks for lowercase character.
 * @c: Function takes a parameter c whose data type is int
 * Description: Checks for lowercase characters using the ASCII integer
 * representation of lowercase alphabets a-z which is 97-122
 *
 * Return: 1 if the character is lowercase and 0 if not lowercase.
 **/

int _islower(int c)
{


	return (c >= 97 && c <= 122);


}
