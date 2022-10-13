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
	char ch;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ch = separator[i];
		if (ch >= '0' && ch <= '9')
		{
			if (i != n - 1)
				printf("%d, ", va_arg(ap, int));
			else
				printf("%d\n", va_arg(ap, int));
		va_end(ap);
		}
	}
}
