#include "main.h"
/**
 * print_number - print number
 * @n: parameter
 */
void print_number(int n)
{
	if (n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n <= 99)
	{
		int k = n % 10;
		int l = n / 10;

		_putchar(l + '0');
		_putchar(k + '0');
	}
	else if (n <= 999)
	{
		int k = n % 10;
		int m = n % 100 / 10;
		int l = n / 100;

		_putchar('0' + l);
		_putchar('0' + m);
		_putchar('0' + k);
	}
	else if (n <= 9999)
	{
		int k = n % 10;
		int m = n % 1000 / 100;
		int o = n % 1000 % 100 / 10;
		int l = n / 1000;

		_putchar('0' + l);
		_putchar('0' + o);
		_putchar('0' + m);
		_putchar('0' + k);
	}
	_putchar('\n');
}
