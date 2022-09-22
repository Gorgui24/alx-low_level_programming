#include "main.h"
#include <string.h>

/**
 * cap_string - lowercase to uppercase
 * @s: parameter
 * Return: pointer
 */
char *cap_string(char *s)
{
	char ch[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', 
		'}', '\n', '\t', ' '};
	int i, j, k;
	int len = strlen(s) - 1, lens = strlen(ch) -1;

	for (i = 0; i <= len; i++)
	{
		k = 0;
		for (j = 0; j <= lens; j++)
		{
			if (s[i] == ch[j])
			{
				k++;
				if (k == 1)
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
