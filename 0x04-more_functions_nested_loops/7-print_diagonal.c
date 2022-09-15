#include "main.h"
/**
 * print_diagonal - print espace and \
 * @n: parameter that define number of espace whith \ to print
 */
void print_diagonal(int n)
{
	int  count = 0;
	if (n > 0)
	{
		while (n > count)
		{
			_putchar(' ');
			count++;
		}
		_putchar('\\');
	}
	_putchar('\n');
}
