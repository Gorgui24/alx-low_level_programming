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
	int i, k, j = strlen(s) - 1;
	
	for (i = 0; i <= j; i++)
	{
		s[i] = s[i];
		_putchar('\n');
		for (k = j; k >= 0; k--)
		{
			s[i] = s[k];
		}
	}
}
