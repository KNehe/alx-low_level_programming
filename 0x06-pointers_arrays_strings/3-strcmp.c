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
 * _strcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: Return -15 if s1 < s2, 15 if s1 > s2, else 0
*/
int _strcmp(char *s1, char *s2)
{
	int s1Len, s2Len, i, value;

	s1Len = _strlen(s1);
	s2Len = _strlen(s2);
	value = 0;
	if (s1Len < s2Len)
		return (value = -15);
	if (s1Len > s2Len)
		return (value = 15);
	for (i = 0; i < s1Len; i++)
	{
		if (s1[i] < s2[i])
		{
			value = -15;
			break;
		}
		if (s1[i] > s2[i])
		{
			value =  15;
			break;
		}
	}
	return (value);
}
