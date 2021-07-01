#include "holberton.h"
/**
 * *rot13 - Encodes a string using rot13
 * @str: Pointer to string
 * Return: Pointer to str
*/
char *rot13(char *str)
{
	int i, j;

	char x[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
				break;
			}
		}
	}
	return (str);
}
