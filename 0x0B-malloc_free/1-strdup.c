#include <stdlib.h>
#include "holberton.h"
/**
  * _strlen - Finds length of a string
  * @s: Pointer to string
  * Return: length of s
*/
unsigned int _strlen(char *s)
{
	unsigned int index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
  * _strdup - Creates a duplicate of a string,
  * @str: Pointer to original string
  * Return: NULL if str is NULL, pointer to duplicate else NULL if it fails
*/

char *_strdup(char *str)
{
	char *arr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	arr = malloc(sizeof(char) * len + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0 ; i < len; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}

