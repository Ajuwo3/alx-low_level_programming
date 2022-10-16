#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg_ptr;
	char *s_arg;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arg_ptr, n);
	while (i < n)
	{
		s_arg = va_arg(arg_ptr, char *);
		if (i != 0 && separator != NULL)
			printf("%s", separator);
		if (s_arg != NULL)
			printf("%s", s_arg);
		else
			printf("(nil)");
		i++;
	}
	va_end(arg_ptr);
	printf("\n");
}
