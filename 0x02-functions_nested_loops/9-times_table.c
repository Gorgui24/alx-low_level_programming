#include "main.h"
/**
 * times_table - function to print 0 to  81
 *
 */
void times_table(void)
{
	int cl, li, mul, fd, ld;

	for (cl = 0; cl <= 9; cl++)
	{
		for (li = 0; li <= 9; li++)
		{
			mul = cl * li;
			if (li > 0)
				_putchar(' ');
			if (mul < 10)
			{
				if (li != 0)
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


