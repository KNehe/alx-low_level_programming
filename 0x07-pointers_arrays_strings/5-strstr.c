#include "holberton.h"
/**
  * _strstr- Locates first occurrence of substring
  * @haystack: Pointer to string to be searched
  * @needle: Pointer to string to match
  * Return: Pointer to beginning of located substring, otherwise NULL
*/

char  *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);

}

