#include "holberton.h"
/**
 * print_number - Prints an integer >= 0 || <= 0
 * @n: Integer to print
 * Return: void
*/
void print_number(int n)
{
	int i, j;

	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10)
	{
		i = n / 10;
		j = n % 10;
		print_number(i);
		print_number(j);
	}
	else if (n < 0)
	{
		_putchar('-');
		n *= -1;
		if (n >= 10)
		{
			print_number(n);
		}
		else
		{
			_putchar(n + '0');
		}
	}
}
