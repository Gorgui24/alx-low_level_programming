#include "main.h"
/**
 * jack_bauer - function to print 00:00 till 23:59
 *
 */
void jack_bauer(void)
{
	int h, hs;
	for (h = 0; h <= 2; h++)
	{
		for (hs = 0; hs <= 9; hs++){
			if (h <= hs)
			{
				_putchar(h);
				_putchar(hs);
			}
		
		
			_putchar('\n');
		}
	}
}
