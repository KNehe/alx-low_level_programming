#include "holberton.h"
#include <stdio.h>
/**
 * print_array- Prints elements of an array of integers,
 * followed by a new line
 * @a: Pointer to array
 * @n: Number of elements to be printed
 * Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
