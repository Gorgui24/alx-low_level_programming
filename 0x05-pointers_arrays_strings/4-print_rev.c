#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - define size of string
 * @s: parameter to get size
 * Return: int
 */
void print_rev(char *s)
{
	int i, j = strlen(s) - 1;

	for (i = j; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
