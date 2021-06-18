#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints all single digit
 * numbers of base 10 string from 0
 * using only putchar
 * followed by a new line
 * Return: 0
*/
int main(void)
{
	int firstNumber;

	firstNumber = 0;
	while (firstNumber < 10)
	{
		putchar(firstNumber + '0');
		firstNumber++;
	}
	putchar('\n');
	return (0);
}
