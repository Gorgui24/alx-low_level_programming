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
	int i = strlen(a);

	for (n = 0; n < i; n++)
	{
		printf(a[n]);
		if (n != i - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
