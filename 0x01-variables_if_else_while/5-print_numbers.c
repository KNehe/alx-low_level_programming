#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints all single digit
 * numbers of base 10 string from 0
 * followed by a new line
 * Return: 0
*/
int main(void)
{
	int firstNumber;

	firstNumber = 0;
	while (firstNumber < 10)
	{
		printf("%d", firstNumber);
		firstNumber++;
	}
	putchar('\n');
	return (0);
}
