#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by a new line
 *
 * Return: void
*/
void print_alphabet_x10(void)
{
	char alpha;
	int count;

	count = 0;
	while (count <= 9)
	{
	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	count++;
	}
}
