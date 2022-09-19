#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts2 - print string
 *@str: string to print
 */
void puts2(char *str)
{
	int n;
	int j = strlen(str);

	for (n = 0; n < j; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
