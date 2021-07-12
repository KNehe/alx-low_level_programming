#include <stdio.h>
/**
  * main - Prints all arguments it receives,
  * followed by a new line
  * @argc: Argument count
  * @argv: Pointer to array of arguments
  * Return: Always 0 if (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
