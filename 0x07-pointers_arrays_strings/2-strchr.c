#include "holberton.h"
/**
  * _strchr - Find a character in a string
  * @s: Pointer to string to be searched
  * @c: Character to find
  * Return: Pointer to first occurence of c, otherwise NULL
*/

char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return s;
	}
	return (0);

}

