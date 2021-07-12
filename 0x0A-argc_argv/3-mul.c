#include <stdio.h>
#include <stdlib.h>
/**
  * main - Multiplies two numbers,
  * followed by a new line
  * @argc: Argument count
  * @argv: Pointer to array of arguments
  * Return: 0 if (Success), otherwise 1
*/

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
	}

	printf("%d\n", result);

	return (0);
}
