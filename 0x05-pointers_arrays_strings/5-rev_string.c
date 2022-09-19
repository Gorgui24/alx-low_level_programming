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
	int i, k = 0, j = strlen(s) - 1;
	
	for (k = 0; k <= j; k++)
		s[k];
	for (i = j; i >= 0; i--)
		s[i];
	_putchar('\n');
}
