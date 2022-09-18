#include "main.h"
/**
 * print_times_table - function to print 0 to n
 * @n: parameter to define number of print
 */
void print_times_table(int n)
{
	int cl, li, mul, fd, ld;

	for (cl = 0; cl <= n; cl++)
	{
		for (li = 0; li <= n; li++)
		{
			mul = cl * li;
			if (li > 0 && li < 100)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if (li >= 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			if (mul < 10)
			{
				if (li != 0)
				{
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
			if (mul >= 10 && mul < 100)
			{
				fd = mul / 10;
				ld = mul % 10;
				_putchar(fd + '0');
				_putchar(ld + '0');
			}
			if (mul >= 100 && mul < 1000)
			{
				fd = mul / 100;
				fds = (mul / 10) % 10;
				ld = fds % 10;
				_putchar(fd + '0');
				_putchar(fds + '0');
				_putchar(ld + '0');
			}
			if (li != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}


