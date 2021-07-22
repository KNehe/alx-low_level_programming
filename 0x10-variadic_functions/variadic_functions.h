#ifndef VAR_FUNC
#define VAR_FUNC
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void str_helper(char *str);


/**
  * struct custom - struct
  * @letter: char
  * @func: Function pointer
  */
typedef struct custom
{
	char letter;
	void (*func)(va_list);
} mytype;

#endif
