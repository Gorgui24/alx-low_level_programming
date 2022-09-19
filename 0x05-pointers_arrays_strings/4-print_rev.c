#include "main.h"
#include <string.h>
/**
 * print_rev - define size of string
 * @s: parameter to get size
 * Return: int
 */
void print_rev(char *s)
{

	char t[strlen(s)];
	int i;

	for (i = (strlen(s) - 1); i <= 0; i--)
		_putchar(t[i]);
}
