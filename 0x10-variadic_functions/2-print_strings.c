#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - return adress
 * @n: char parameter
 * @separator: pointer parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ch;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ch = va_arg(ap, char *);
		if (ch)
			printf("%s", ch);
		else
			printf("(nil)");
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
