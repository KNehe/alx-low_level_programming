#include "holberton.h"
/**
 * reverse_array - Compares two strings
 * @a: Pointer to array of integers
 * @n: Number of elements of a
 * Return: void
*/
void  reverse_array(int *a, int n)
{
	int i, *startPt, *endPoint, temp;

	startPt = a;
	endPoint = a + (n - 1);
	for (i = 0; i < n / 2; i++)
	{
		temp = *startPt;
		*startPt = *endPoint;
		*endPoint = temp;
		startPt++;
		endPoint--;
	}
}
