#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints all possible combinations
 * of two digits. Followed by comma and sapce
 * The two digits must be different
 * 01 and 10 are considered the same combination
 * Only use putchar
 * Return: 0
*/
int main(void)
{
	int count1;
	int count2;

	count1 = 0;
	while (count1 <= 8)
	{
		count2 = 0;
		while (count2 <= 9)
		{
			if (count1 < count2)
			{
				putchar(count1 + '0');
				putchar(count2 + '0');
				if (count2 != 9 || count1 != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			count2++;
		}
		count1++;

	}
	putchar('\n');
	return (0);
}
