#include "holberton.h"
/**
  * _strchr - Find a character in a string
  * @s: Pointer to string to be searched
  * @c: Character to find
  * Return: Pointer to first occurence of c, otherwise NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');

}

