#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - print number
 *@a: table string to print
 *@n: index of table
 */
void print_array(int *a, int n)
{
	long i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
