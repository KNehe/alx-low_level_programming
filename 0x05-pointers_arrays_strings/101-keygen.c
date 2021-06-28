#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Creates random valid passwords
 * Return: Always 0 if (Success)
*/
int main(void)
{
	int randNum, count, total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		randNum = (rand() % 125) + 1;
		printf("%c", randNum);
		total -= randNum;
	}
	printf("%c", total);

	return (0);
}
