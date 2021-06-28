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
 * rev_string - Reverses a string,
 * @s: Pointer to string
 * Return: void
*/

void rev_string(char *s)
{
	char *startpt, *endpt, temp;
	int len, index;

	startpt = s;
	len =  _strlen(s);
	endpt = s + len - 1;

	for (index = 0 ; index < len / 2; index++)
	{
		temp = *endpt;
		*endpt = *startpt;
		*startpt = temp;
		startpt++;
		endpt--;
	}
}
