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
 * _strncat - Concatenates two strings
 * It will use at most n bytes from src
 * @dest: Pointer to string to be conatenated upon
 * @src: Pointer to string to appended
 * @n: Maximum number of characters to be appended
 * Return: Pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *destAddress;
	int destLen, i;

	destAddress = dest;
	destLen = _strlen(dest);
	destAddress = destAddress + destLen;
	i = 1;
	while (i <= n && *src != '\0')
	{
		*destAddress = *src;
		src++;
		destAddress++;
		i++;
	}

	*destAddress = '\0';

	return (dest);
}
