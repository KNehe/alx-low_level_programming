#include "holberton.h"
/**
 * printer - prints the table
 * @prod: multiplication value
 * Return always void
 */
void printer(int prod)
{
	int split1, split2, split2_1, split2_2;

			if (prod > 99)
			{
				_putchar(' ');
				split1 = prod % 10;
				split2 = prod / 10;
				split2_1 = split2 % 10;
				split2_2 = split2 / 10;
				_putchar(split2_2 + '0');
				_putchar(split2_1 + '0');
				_putchar(split1 + '0');
			}
			else if (prod >= 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
}
/**
 * print_times_table - prints the n times table, starting with 0
 *@n: The number n
 * Return:  Always void
*/
void print_times_table(int n)
{
	int i, j, prod;

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				continue;
			}
			prod = i * j;
			_putchar(',');
			printer(prod);
		}
		_putchar('\n');
	}
	}
}
