#include "holberton.h"
/**
  * _strspn - Gets length of a prefix substring
  * @s: Pointer to string to be searched
  * @c: Character to find
  * Return: Pointer to first occurence of c, otherwise NULL
*/

char *_strspn(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return s;
	}
	return (0);

}

