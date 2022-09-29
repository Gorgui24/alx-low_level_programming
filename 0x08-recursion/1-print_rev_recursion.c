#include "main.h"
#include<string.h>
/**
 * _print_rev_recursion - print by recursion
 * @s: pointer parameter
 */
void _print_rev_recursion(char *s)
{
	int i = 0, j = strlen(s) - 1;

	if (i < 0)
	{
		_putchar('\n');
		return;
	}
	if (i < j)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
