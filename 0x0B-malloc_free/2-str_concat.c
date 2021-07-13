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
  * str_concat - Concatenates two strings.
  * @s1: Pointer to first string
  * @s2: Pointer to second string
  * Return: Pointer to newly allocated space,contents of s1,
  * followed by s2 and null terminated, else NULL if it fails
*/

char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j, k, h, p, len, len1, len2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len = _strlen(s1) + _strlen(s2);
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	arr = malloc(sizeof(char) * len + 1);
	if (arr == NULL)
		return (NULL);
	if (len == 0)
	{
		arr[0] = '\0';
		return (arr);
	}
	if (len1 == 0 && len2 > 0)
	{
		for (i = 0; i < len2; i++)
			arr[i] = s2[i];
	}
	else if (len1 > 1 && len2 == 0)
	{
		for (j = 0; j < len1; j++)
			arr[j] = s1[j];
	}
	else
	{
		for (k = 0; k < len1; k++)
			arr[k] = s1[k];
		for (h = len1, p = 0; p < len2; h++, p++)
			arr[h] = s2[p];
	}
	arr[len] = '\0';

	return (arr);
}

