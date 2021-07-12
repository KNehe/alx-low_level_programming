#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * isInt - Check if s is an integer
  * @s: Pointer to string to check
  * Return: 0 or 1
*/
int isInt(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
/**
  * main - Adds positive numbers,
  * followed by a new line
  * @argc: Argument count
  * @argv: Pointer to array of arguments
  * Return: 0 if (Success), otherwise 1
*/

int main(int argc, char *argv[])
{
	int result;

	result = 0;

	while (--argc)
	{
		if (isInt(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[argc]);
	}
	printf("%i\n", result);

	return (0);
}
