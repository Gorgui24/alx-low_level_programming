#include "main.h"
#include <string.h>

/**
 * string_toupper - lowercase to uppercase
 * @*s: parameter
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int j;
	int i = strlen(s);
	char ch;

	for (j = 0; j <= i; i++)
	{
		ch = s[i];
		if (ch >= 'a' && ch <= 'z')
		{
			s[i] = s[i] + 32;
		}
	}
	return (s);
}
