#include "main.h"
#include <stdio.h>
/**
 * get_endianness -  Checks the endianness.
 * Return: Number of bits
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
