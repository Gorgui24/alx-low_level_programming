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
		integ = -integ;
	}
	if ((integ / 10) > 0)
		print_number(integ / 10);
	_putchar((integ % 10) + '0');
	_putchar('\n');
}
