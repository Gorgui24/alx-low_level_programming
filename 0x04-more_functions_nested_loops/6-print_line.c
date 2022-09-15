#include "main.h"
/**
 * print_line - print line like _
 */
void print_line(int n)
{
	int  count = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > count)
		{
			_putchar('_');
			count++;
		}
	_putchar('\n');
	}
}
