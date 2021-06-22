#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * followed by a new line
 *
 * @c: The character to be checked
 * Return:  1 if character is lowercase: 0 otherwise
*/
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
