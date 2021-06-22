#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: The character to be checked
 * Return:  1 if a letter is lowercase or uppercase: 0 otherwise
*/
int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
