#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - Sums all its parameters
  * @n: Named int arg
  * @...: Unlimited args
  * Return: Sum of ... else 0
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list arg_list;

	if (n == 0)
		return (0);
	va_start(arg_list, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(arg_list, unsigned int);
	va_end(arg_list);

	return (sum);
}
