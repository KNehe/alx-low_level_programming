#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
  * main - Prints the number of arguemts passed into it,
  * followed by a new line
  * @argc: Argument count
  * @argv: Pointer to array of arguments
  * Return: Always 0 if (Success)
*/

int main(int argc, char *argv[])
{
	UNUSED(*argv);

	printf("%d\n", argc - 1);

	return (0);
}
