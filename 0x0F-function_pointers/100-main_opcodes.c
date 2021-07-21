#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - should print opcodes
 * @argc: Number of arguments
 * @argv: Array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *op_c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	op_c = (char *)main;

	for (i = 0; i < bytes - 1; i++)
	printf("%02hhx ", op_c[i]);
	printf("%02hhx\n", op_c[i]);

	return (0);
}
