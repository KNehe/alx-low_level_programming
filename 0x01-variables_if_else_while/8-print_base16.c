#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints all numbers of base 16
 * in lower case
 * in reverse followed by a new line
 * Return: 0
*/
int main(void)
{
	char numStartValue;
	char alphaStartValue;

	numStartValue = '0';
	alphaStartValue = 'a';
	while (numStartValue <= '9')
	{
		putchar(numStartValue);
		numStartValue++;
	}
	while (alphaStartValue <= 'f')
	{
		putchar(alphaStartValue);
		alphaStartValue++;
	}
	putchar('\n');
	return (0);
}
