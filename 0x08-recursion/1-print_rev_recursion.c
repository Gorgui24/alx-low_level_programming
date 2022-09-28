#include "main.h"
#include<string.h>
/**
 * _print_rev_recursion - print by recursion
 * @s: pointer parameter
 */
void _print_rev_recursion(char *s)
{
	int  j = strlen(s) - 1;

	if (j < 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[j]);
	_print_rev_recursion(s - 1);
}
