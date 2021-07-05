#include "holberton.h"
/**
  * _memset - Fills the first n bytes of the memory area
  * pointed by a with the byte b
  * @s: Point to string to be filled
  * @b: Contant byte
  * @n: Number of bytes
  * Return: Pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n || s[i] != '\0'; i++)
	{
		*(s + i) = b;
	}
	return (s);

}

