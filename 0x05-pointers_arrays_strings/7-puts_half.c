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
 * puts_half- Prints the second half of a string
 * if number of characters is odd,
 * print the last n characters of the string
 * @str: Pointer to string
 * Return: void
*/

void puts_half(char *str)
{
	int len, i, start;

	len = _strlen(str);
	if (len % 2 != 0)
	{
		start = (len / 2) + 1;
	}
	else
	{
		start = len / 2;
	}
	for (i = start; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
