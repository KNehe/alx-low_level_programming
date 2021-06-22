#include <stdio.h>
/**
 * main - Entry point
 * prints first 98 ibonnaci numbers
 * starting with 1 and 2, folowed by a new line
 *
 * Return: Always 0 if Success
*/

int main(void)
{
	long f1, f2, next;
	int i;

	f1 = 1;
	f2 = 2;

	printf("%ld, %ld", f1, f2);
	for (i = 2; i < 98; i++)
	{
		next = f1 + f2;
		printf(", %ld", next);
		f1 = f2;
		f2 = next;
	}
	putchar('\n');

	return (0);
}
