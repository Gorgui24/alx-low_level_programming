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
	char t[sizeof(s)];
	int i;

	for (i = (sizeof(s) - 1); i <= 0; i--)
		_putchar(t[i]);
}
