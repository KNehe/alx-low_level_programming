#include <stdio.h>
#include <stdlib.h>
/**
  * main - Prints the minimum number of coins to make
  * change for an amount of money,
  * followed by a new line
  * @argc: Argument count
  * @argv: Pointer to array of arguments
  * Return: 0 if (Success), otherwise 1
*/

int main(int argc, char *argv[])
{
	int coins, change;

	coins = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	change = atoi(argv[1]);

	while (change > 0)
	{
		if (change >= 25)
			change -= 25;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
		else if (change >= 1)
			change--;
		coins++;
	}

	printf("%d\n", coins);

	return (0);
}
