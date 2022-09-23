#include "main.h"
/**
 * print_number - print number
 * @n: parameter
 */
void print_number(int n)
{
	unsigned int integ = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
	_putchar('\n');
}
