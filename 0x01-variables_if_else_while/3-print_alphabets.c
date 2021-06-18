#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints the alphabet in
 * lowercase, then in uppercase
 * followed by a new line
 * Return: 0
*/
int main(void)
{
	char lowerAlpha;
	char upperAlpha;

	lowerAlpha = 'a';
	upperAlpha = 'A';
	while (lowerAlpha <= 'z')
	{
		putchar(lowerAlpha);
		lowerAlpha++;
	}
	while (upperAlpha <= 'Z')
	{
		putchar(upperAlpha);
		upperAlpha++;
	}
	putchar('\n');
	return (0);
}
