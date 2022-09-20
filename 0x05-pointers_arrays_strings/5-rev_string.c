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
	int i, k, l = 0, j = strlen(s) - 1;
	
	for (i = 0; i <= j; i++)
	{
		s[i] = s[i];
	}
	for (k = j; k >= 0; k--)
	{
		s[l] = s[k];
		l++;
	}
}
