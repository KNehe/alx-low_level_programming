#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
  * main- Finds sum
  * @argc: Number of arguments
  * @argv: Array of arguments
  * Return: 0 if success, otherwise any non zero
  */
int main(int argc, char *argv[])
{
	char *optr, op, num2;
	int a, b;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	optr = argv[2];
	op = *(optr + 0);
	if (!(op == '+' || op == '-' || op == '*' || op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(99);
	}
	num2 = *(*(argv + 3));
	if ((op == '/' || op == '%') && num2 == '0')
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	f = get_op_func(optr);

	printf("%d\n", f(a, b));

	return (0);
}
