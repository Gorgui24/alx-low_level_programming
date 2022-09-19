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
	int n;
	int j = (strlen(str) - 1) / 2;
	int k = strlen(str);

	for (n = j; n <= k; n++)
		_putchar(str[n]);
	_putchar('\n');
}
