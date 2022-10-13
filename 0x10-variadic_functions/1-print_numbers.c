#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h> 
/**
 * print_numbers - return adress
 * @n: char parameter
 * @separator: pointer parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ch;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ch = va_arg(ap, char *);
		if (ch && i < n - 1)
			printf("%s, ", ch);
		else
			printf("%s\n", ch);
	}
	va_end(ap);
}
