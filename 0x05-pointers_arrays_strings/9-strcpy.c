#include "holberton.h"
/**
 * *_strcpy- Copies the string pointed to by src,
 * including the terminating null byte
 * to the buffer pointed to by destination
 * @dest: Pointer to destination
 * @src: Pointer to source
 * Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	do
		* p++ = *src;
	while (*src++);

	return (dest);
}
