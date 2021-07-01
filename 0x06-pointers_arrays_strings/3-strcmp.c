#include "holberton.h"
/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * Return: Return -15 if s1 < s2, 15 if s1 > s2, else 0
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	if (s1[i] == '\0')
		return (0);
	}
}
