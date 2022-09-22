#include "main.h"
#include <stdio.h>

/**
 * reverse-array - reverse array int
 * @a: parameter 1
 * @n:parameter 2
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = n - 1;
	j = i;
	while (i >= 0)
	{
		if (j != i)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (a[i] <= 9)
		{
			_putchar(a[i] + '0');
		}
		else if(a[i] <= 99)
		{
			int k = a[i] % 10;
			int l = a[i] / 10;

			_putchar(l + '0');
			_putchar(k + '0');
		}
		else if (a[i] <= 999)
		{
			int k = a[i] % 10;
			int m = a[i] % 100 / 10;
			int l = a[i] / 100;

			_putchar(l + '0');
			_putchar(m + '0');
			_putchar(k + '0');
		}
		else if(a[i] <= 9999)
		{
			int k = a[i] % 10;
			int m = a[i] % 1000 / 100;
			int n = a[i] % 1000 % 100 / 10;
			int l = a[i] / 1000;

			_putchar(l + '0');
			_putchar(n + '0');
			_putchar(m + '0');
			_putchar(k + '0');
		}
		i--;	
	}
	putchar('\n');
}
