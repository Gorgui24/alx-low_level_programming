#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *
 * puts_half - print string
 *@str: string to print
 */
void puts_half(char *str)
{
	long n;
	long j = (strlen(str)) / 2;
	long k = strlen(str);

	for (n = j; n < k; n++)
		_putchar(str[n]);
	_putchar('\n');
}
