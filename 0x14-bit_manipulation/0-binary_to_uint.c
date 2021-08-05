#include "main.h"
#include <stdio.h>

/**
 * _strlen - find length of string
 * @s: Pointer to string
 * Return: s length
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _pow - find pow of a number
 * @x: base
 * @y: power
 * Return: x raised to y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (_pow(x, y / 2) * _pow(x, y / 2));
	else
		return (x * _pow(x, y / 2) * _pow(x, y / 2));
}
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars
 * Return: Converted number else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, len, i, pow;
	char c;

	if (!b)
		return (0);
	len = _strlen(b);
	pow = len - 1;
	dec = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		c = b[i];
		if (!(c == '0' || c == '1'))
			return (0);
		c = c - '0';
		dec += c * _pow(2, pow);
		pow--;
	}
	return (dec);
}

