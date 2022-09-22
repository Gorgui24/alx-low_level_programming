#include "main.h"
#include <string.h>

/**
 * leet - replace chaar to int
 * @s: parameter
 * Return: pointer
 */
char *leet(char *s)
{
	int i, j = strlen(s) - 1;

	for (i = 0; i <= j; i++)
	{
		if (s[i] == 'A' || s[i] == 'a')
		{
			s[i] = 4 + '0';
		}
		if (s[i] == 'E' || s[i] == 'e')
		{
			s[i] = 3 + '0';
		}
		if (s[i] == 'O' || s[i] == 'o')
		{
			s[i] = 0 + '0';
		}
		if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = 7 + '0';
		}
		if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = 1 + '0';
		}
	}
	return (s);
}
