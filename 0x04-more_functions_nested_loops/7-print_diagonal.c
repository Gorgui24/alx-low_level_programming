#include "main.h"
/**
 * print_diagonal - print espace and \
 * @n: parmater that define number of espace whith '\' to print
 */
void print_diagonal(int n)
{
	int  count = 0;

	if (n <= 0)
	{
	}
	else
	{
		while (n > count)
		{
			_putchar(' ');
			count++;
		}
	}
	_putchar('\\');
	_putchar('\n');
}
