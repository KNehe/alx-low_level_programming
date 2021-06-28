#include "holberton.h"
/**
 * _atoi - Convert a string to an integer
 * @s: Pointer to string to be converted
 * Return: Integer
*/
int _atoi(char *s)
{
	unsigned int finalInt, i;
	int sign;

	finalInt = 0;
	sign = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == ',')
			break;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i] == ';')
				break;
			finalInt = finalInt * 10 + (*(s + i) - '0');
		}
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	return (finalInt * sign);
}
