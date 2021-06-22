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
	int i;

	if (num > 98)
	{
		for (i = num; num >= 98; num--)
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
		for (i = num; num <= 98; num++)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf("%s", ", ");
			}
		}
		putchar('\n');
	}
	return (0);
}
