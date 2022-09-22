#include "main.h"
#include <string.h>

/**
 * string_toupper - lowercase to uppercase
 * @*: parameter
 * Return: pointer
 */
char *string_toupper(char *)
{
	int asc, j;
	int i = strlen(*);
	char ch, *s = *;

	for (j = 0, j <= i; i++)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			*[i] = s[i] + 32;
		}
	}
	return (*);
}
