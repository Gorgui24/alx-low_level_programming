#include "main.h"
/**
 * print_diagonal - print espace and \
 * @n: parameter that define number of espace whith \ to print
 */
void print_diagonal(int n)
{
	int  count = 0;

	if (n > count)
	{
		for (int i = 0; i <= count; i++)
		{
			if (i > 0)
				_putchar(' ');
		}
	}
	_putchar('\\');
	_putchar('\n');
	count++;

}