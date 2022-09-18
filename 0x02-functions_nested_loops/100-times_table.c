#include "main.h"
/**
 * print_times_table - function to print 0 to  n
 * @n: parameter to define number to print
 *
 */
void print_times_table(int n)
{
	int cl, li, mul, fd, ld;

	for (cl = 0; cl <= n; cl++)
	{
		for (li = 0; li <= n; li++)
		{
			mul = cl * li;
			if (li > 1)
				_putchar(' ');
			if (mul < 10)
			{
				_putchar(' ');
				_putchar(mul + '0');
			}
			if (mul >= 10)
			{
				fd = mul / 10;
				ld = mul % 10;
				_putchar(fd + '0');
				_putchar(ld + '0');
			}
			if (li != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}


