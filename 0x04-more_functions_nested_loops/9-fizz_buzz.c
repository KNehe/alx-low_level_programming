#include <stdio.h>
/**
 * main - Entry point
 * Prints the numbers 1 t0 100, followed by a new line
 * But for multiples of three print, Fizz
 * For multiples pf 5 print, Buzz
 * If both print, FizzBuzz
 * Return: Always 0 if (success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
