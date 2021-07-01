#include "holberton.h"
/**
 * *leet - Encodes a string into 1337
 * @str: Pointer to string
 * Return: Pointer to str
*/
char *leet(char *str)
{
	char alphas1[6] = "aeotl";
	char alphas2[6] = "AEOTL";
	char alphas3[6] = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == alphas1[j] || str[i] == alphas2[j])
			{
				str[i] = alphas3[j];
			}
		}
	}
	return (str);
}
