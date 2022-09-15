#include "main.h"
/**
 * print_diagonal - print espace and \
 * @n: parameter to print ' ' dependinding to it number and end \
 */
void print_diagonal(int n)
{
	int  count = 0;

	if (n > 0)
	{
		while (n > count)
		{
			int i = 0;

			while (i < count)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			count++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
