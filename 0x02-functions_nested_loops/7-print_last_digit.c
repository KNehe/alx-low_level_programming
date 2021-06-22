#include "holberton.h"
/**
 * abs -  prints absolute value of n
 * @n: number to be checked
 * Return: absolute value
*/
int abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-1 * n);
}
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to be checked
 * Return:  the value of the last digit
*/
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = abs(n % 10);
	_putchar(lastDigit + '0');
	return (lastDigit);
}
