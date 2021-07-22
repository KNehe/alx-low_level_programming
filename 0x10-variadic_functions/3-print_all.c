#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
   * str_helper - Prints string
   * @str: Pointer to string
   * Return: void
   */
void str_helper(char *str)
{
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
  * print_all - Prints anything
  * @...: Unlimited args
  * @format: String format
  * Return: void
  */
void print_all(const char * const format, ...)
{
	const char *s;
	va_list args;
	int c, i;
	float f;
	char *str;

	s = format;
	va_start(args, format);
	while (s && *s != '\0')
	{
		switch (*s)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case  'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				str_helper(str);
				break;
			default:
				break;
		}
		s++;
		if (*s == 'c' || *s == 'i' || *s == 'f' || *s == 's')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
