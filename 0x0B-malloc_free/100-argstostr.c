#include <stdlib.h>
#include "holberton.h"

/**
 * __strlen - Returns length of a string
 * @s: Pointer to string
 * Return: length of s
*/
int __strlen(char *s)
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
  * argstostr - Concatenates all the arguments of your program
  * Each argument should be followed by a \n in the new string
  * @ac: Number of arguments
  * @av: Double pointer to array of pointers(arguments)
  * Return: Pointer to new string
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	k = 0;
	len = 0;
	i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, len++)
		len += __strlen(av[i]);

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}

