#include "holberton.h"
#include <stdio.h>
/**
  * set_string - Sets value of a pointer to a char
  * @s: Double pointer
  * @to: Pointer to string
  * Return: Void
*/

void set_string(char **s, char *to)
{
	*s = to;
}
