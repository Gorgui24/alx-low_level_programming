#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * prev_string - print string
 * @s: string to print
 * Return: int
 */
void rev_string(char *s)
{
	int i, j = strlen(s) - 1;
	
	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	
	}
	_putchar('\n');
}
