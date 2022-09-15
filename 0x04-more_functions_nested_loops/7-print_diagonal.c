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
		int i;
		for (i = 0; i <= count; i++)
		{
			if (i > 1)
				_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	count++;
	}
}
