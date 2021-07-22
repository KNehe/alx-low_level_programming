#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - Prints strings
  * @n: Number of strings
  * @separator: String printed between stringd
  * @...: Unlimited args
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;
	unsigned int j;

	va_start(args, n);
	j = n;
	while (j)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && j != 1)
			printf("%s", separator);
		--j;
	}
	printf("\n");
}

