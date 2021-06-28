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
 * puts2 - Prints every other character of a string,
 * starting with the first character,
 * followed by a new line,
 * @str: Pointer to string
 * Return: void
*/

void puts2(char *str)
{
	int len, i;

	len = _strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
