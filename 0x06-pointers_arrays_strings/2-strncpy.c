#include "holberton.h"

/**
 * _strlen - Returns length of a string
 * @s: Pointer to string
 * Return: Length of c
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
 * _strncpy - Copies a string
 * @dest: Pointer to string to be conatenated upon
 * @src: Pointer to string to copied
 * @n: Maximum number of characters to be copy
 * Return: Pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, destLen;

	destLen = _strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	dest[destLen] = '\0';
	return (dest);
}
