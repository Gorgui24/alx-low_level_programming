#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - print number
 * @n: number parameter
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (i = n; i >= 98, i--)
		{
			printf("%d", n)
			if (n != 98)
				printf(", ");
		}
	}
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	_putchar('\n');
}
