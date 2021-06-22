#include <stdio.h>
/**
 * main - Entry point
 * prints sum of even Fibonnaci numbers
 * less than 4000000
 * starting with 1 and 2, folowed by a new line
 *
 * Return: Always 0 if Success
*/

int main(void)
{
	long f1, f2, next, sum;

	f1 = 1;
	f2 = 2;
	sum = 0;
	next = 0;
	while (next <= 4000000)
	{
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		if (f1 % 2 == 0)
		{
			sum += f1;
		}
	}
	printf("%ld", sum);
	putchar('\n');

	return (0);
}
