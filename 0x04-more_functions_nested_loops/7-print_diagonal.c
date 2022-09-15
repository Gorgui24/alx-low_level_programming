#include "main.h"
/**
 * print_diagonal - print espace and \
 * @n: parameter that define number of espace whith \ to print
 */
void print_diagonal(int n)
{
	int  count = 0;

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
