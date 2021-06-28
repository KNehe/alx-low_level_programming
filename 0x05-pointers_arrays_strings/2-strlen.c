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
