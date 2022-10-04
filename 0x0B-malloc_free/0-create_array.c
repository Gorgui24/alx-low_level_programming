#include "main.h"
#include<string.h>
/**
 * _puts_recursion - print by recursion
 * @s: pointer parameter
 */
char *create_array(unsigned int size, char c)
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
