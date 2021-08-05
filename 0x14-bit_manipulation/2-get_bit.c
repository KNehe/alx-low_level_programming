#include "main.h"
#include <stdio.h>
/**
 * get_bit - Finds the value of a bit at a given index.
 * @n: Decimal number whose bit at certain index is required
 * @index: Index is the index, starting from 0 of the bit you want to get
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return ((n >> index) & 1);
}
