#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural number from n to 98,
 * followed by a new line
 * @num: start number
 * Return: Always void
*/

void print_to_98(int num)
{
	if (num > 98)
	{
		for (; num >= 98; num--)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf("%s", ", ");
			}
		}
		putchar('\n');
	}
	else
	{
		for (; num <= 98; num++)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf("%s", ", ");
			}
		}
		putchar('\n');
	}
}
