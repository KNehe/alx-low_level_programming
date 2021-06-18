#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints all possible combinations
 * of single-digit numbers separated by a comma
 * followed by a space in ascending order
 * Return: 0
*/
int main(void)
{
	int count;

	count = 0;
	while (count <= 9)
	{
		putchar(count + '0');
		if (count < 9)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');
	return (0);
}
