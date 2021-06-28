#include "holberton.h"
/**
 * _strlen - Returns length of a string
 * @s: Pointer to string
 * Return: length of s
*/
int _strlen(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * print_rev - Prints a string in reverse,
 * followed by a new line
 * @s: Pointer to string
 * Return: void
*/

void print_rev(char *s)
{
	int index, size;

	size = _strlen(s);
	size = size - 1;
	for (index = size; index != -1 ; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
