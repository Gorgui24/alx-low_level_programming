#include "main.h"
/**
 * more_numbers - print 10 (1 to 14)
 */
void more_numbers(void)
{
	int n, ch;

	for (n = 0; n <= 10; n++)
	{
		for (ch = 0; ch <= 14; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
