#include "holberton.h"

/**
 * _abs - prints the absolute value of an integer
 *
 * @n: the number to be change into an absolute value
 * Return:  Always 0
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	} else if (n < 0)
	{
		int num;

		num = n;
		num = num * -1;
		return (num);
	}
		return (0);
}
