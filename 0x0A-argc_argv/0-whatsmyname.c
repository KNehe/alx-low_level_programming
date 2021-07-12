#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
  * main - Prints the program's name, followed by a new line
  * If you rename the program, it will print the new name,
  * without having to compile it again
  * You should not remove the path before the name of the program
  * @argc: Argument count
  * @argv: Pointer to array of arguments
  * Return: Always 0 if (Success)
*/

int main(int argc, char *argv[])
{
	UNUSED(argc);

	printf("%s\n", argv[0]);

	return (0);
}
