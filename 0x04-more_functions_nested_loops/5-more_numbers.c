#include "main.h"
/**
 * more_numbers - print 10 (1 to 14)
 */
void more_numbers(void)
{
	int i, n, ch;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar(n + '0');
		}
		for (ch = 1; ch <= 4; ch++)
		{
			if (ch == 1)
			{
				_putchar(n + '0');
				_putchar('0');
			}
			else
			{
				_putchar('1');
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
