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
	int i, k, j = strlen(s) - 1, l = 0;
	
	for (i = 0; i <= j; i++)
	{
		s[i] = s[i];
	}
	k = strlen(s) - 1;
	for (i = k; i = 0; i--)
	{
		s[l] = s[i];
		++l;
	}
}
