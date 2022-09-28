#include "main.h"
#include<string.h>
/**
 * _print_rev_recursion - print by recursion
 * @s: pointer parameter
 */
void _print_rev_recursion(char *s)
{
	int  j = strlen(s) - 1;

	while (j >= 0)
	{
	_putchar(s[j]);
	i--;
	}
	_putchar('\n');

}
