#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - return adress
 * @n: char parameter
 * Return: retunr 1
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
			sum += sum;
		va_end(ap);
	}
	return (sum);
}
