#include "main.h"
#include <stdio.h>
/**
 * flip_bits - Finds the number of bits you would need to flip to get
 * from one number to another.
 * @n: First number
 * @m: Second number
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}
	return (count);
}
