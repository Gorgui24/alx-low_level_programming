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
	int n, j;
	int k = strlen(str);

	if (k % 10 == 0)
		j = (strlen(str) - 1) / 2;
	if(k % 10 != 0)
		j = (strlen(str)) / 2;

	for (n = j; n < k; n++)
		_putchar(str[n]);
	_putchar('\n');
}
