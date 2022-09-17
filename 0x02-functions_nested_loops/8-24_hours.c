#include "main.h"
/**
 * jack_bauer - function to print 00:00 till 23:59
 *
 */
void jack_bauer(void)
{
	int h, hs, mn, mns;

	for (h = 0; h <= 2; h++)
	{
		for (hs = 0; hs <= 9; hs++)
		{
			for (mn = 0; mn <= 5; mn++)
			{
				for (mns = 0; mns <= 9; mns++)
				{
					putchar(h + '0');
					putchar(hs + '0');
					putchar(':');
					putchar(mn + '0');
					putchar(mns + '0');
					putchar('\n');
				}
			}

		}
	}
}
