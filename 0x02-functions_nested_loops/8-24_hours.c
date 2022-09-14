#include "main.h"
/**
 * jack_bauer - function to print 00:00 till 23:59
 *
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	while (h <= 23)
	{
		while (h <= 9)
		{
			_putchar('0');
		}
		_putchar(h + '0');
		_putchar(':');
		while (m <= 59)
		{
			while (m <= 9)
			{
				_putchar('0');
			}
			_putchar(m + '0');
			_putchar('\n');
			m++;
		}
	
		h++;
	}
}
