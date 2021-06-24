#include "holberton.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * should end with a \n
 * @n: Number od times the character \ should be printed
 * Return: void
*/

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n ; i++)
		{
			for (space = 1; space <= i ; space++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
