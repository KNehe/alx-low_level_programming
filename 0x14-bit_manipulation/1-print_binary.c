#include "main.h"
#include <stdio.h>

/**
 * rev - helper func for print_binary
 * @n: Number
 * Return: void
 */
void rev(unsigned long int n)
{
	if (!n)
		return;
	rev(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	else
		rev(n);

}
