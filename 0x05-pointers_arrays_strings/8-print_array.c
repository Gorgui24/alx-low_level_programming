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
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else 
			pritnf("%d", a[i]);
	}
	_putchar('\n');
}
