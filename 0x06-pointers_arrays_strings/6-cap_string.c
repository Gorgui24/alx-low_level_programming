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

	for (i = 0; i <= (strlen(s) - 1); i++)
	{
		k = 0;
		for (j = 0; j <= (strlen(ch) - 1); j++)
		{
			if (s[i] == ch[j])
			{
				k++;
				if (k == 1)
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}

}
