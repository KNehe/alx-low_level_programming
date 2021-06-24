#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: Character to be checked
 * Return: 1 if uppercase; otherwise 0
*/

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
