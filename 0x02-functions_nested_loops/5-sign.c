#include "holberton.h"

/**
 * print_sign - prints the sign of a numberr
 *
 * @n: the number to be checked
 * Return:  1 if a number is greater than zero
 * 0 if number is 0
 * and -1 if number is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
		return (0);
}
