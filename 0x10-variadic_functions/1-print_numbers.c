#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - Prints numbers
  * @n: Number of integers
  * @separator: String printed between numbers
  * @...: Unlimited args
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	unsigned int j;

	va_start(args, n);
	j = n;
	while (j)
	{
		i = va_arg(args, int);
		printf("%d", i);
		if (separator != NULL && j != 1)
			printf("%s", separator);
		--j;
	}
	printf("\n");
}

