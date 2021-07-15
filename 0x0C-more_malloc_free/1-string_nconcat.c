#include <stdlib.h>
#include "holberton.h"
/**
  * _strlen - find length of a string
  * @s: Pointer to string
  * Return: Length of s
*/
unsigned int _strlen(char *s)
{
	unsigned int size;

	size = 0;
	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
  * string_nconcat- Concatenates two strings
  * @s1: Pointer to string to be increased
  * @s2: Pointer to string to be appended to s1
  * @n: Number of bytes to pick from s2
  * Return: Pointer to allocated memory containing s1,
  * followed by first n bytes of s2, and null terminated
  * else return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < _strlen(s2))
		m = malloc(_strlen(s1) + n * sizeof(char) + 1);
	else
		m = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (m == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
		m[i] = s2[j];

	m[i] = '\0';

	return (m);
}
