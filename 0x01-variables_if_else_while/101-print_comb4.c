#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints all possible combinations
 * of three digits. Followed by comma and sapce
 * The three digits must be different
 * 012,120,102,021,201,210 are considered the same
 * Only use putchar
 * Return: 0
*/
int main(void)
{
	int count1;
	int count2;
	int count3;

	count1 = 0;
	while (count1 <= 7)
	{
		count2 = 0;
		while (count2 <= 8)
		{
			count3 = 0;
			while (count3 <= 9)
			{
			if (count1 < count2 && count2 < count3)
			{
				putchar(count1 + '0');
				putchar(count2 + '0');
				putchar(count3 + '0');
				if (count1 != 7 || count2 != 8 || count3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			count3++;
			}
			count2++;
		}
		count1++;

	}
	putchar('\n');
	return (0);
}
