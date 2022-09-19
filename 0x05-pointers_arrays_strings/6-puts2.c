#include "main.h"
#include <stdio.h>
/**
 * _puts - print string
 *@str: string to print
 */
void puts2(char *str)
{
	int n;

	for (n = 0; n < 10; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
