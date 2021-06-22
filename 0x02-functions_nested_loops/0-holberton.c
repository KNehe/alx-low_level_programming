#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 if Success
*/

int main(void)
{
	char str[9] = "Holberton";
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
