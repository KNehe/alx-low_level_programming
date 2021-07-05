#include "holberton.h"
/**
  * _strspn - Gets length of a prefix substring
  * @s: Pointer to string to be searched
  * @accept: Pointer to string
  * Return: Pointer the number of bytes of s from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (k);

}

