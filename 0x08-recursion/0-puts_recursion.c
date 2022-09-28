#include "main.h"
#include<string.h>
/**
 * _puts_recursion - print by recursion
 * @s: pointer parameter
 */
void _puts_recursion(char *s)
{
	int  i = 0, j = strlen(s) - 1;

	if (i > j)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);
}
