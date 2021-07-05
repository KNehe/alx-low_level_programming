#include "holberton.h"
/**
  * _strpbrk - Searches a string for any of a set of bytes
  * @s: Pointer to string to be searched
  * @accept: Pointer to string
  * Return: Pointer to s, otherwise NULL
*/

char  *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);

}

