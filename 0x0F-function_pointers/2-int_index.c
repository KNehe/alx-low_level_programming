#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  * @array: Pointer to array
  * @size: Size of the array
  * @cmp: Function pointer
  * Return: Index of first element for which the cmp
  * function does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
