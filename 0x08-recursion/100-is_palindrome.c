#include "main.h"
#include<string.h>
/**
 * is_palindrome - print 1 or 0
 * @s: char parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	int j = strlen(s) - 1, k = strlen(s) - 2, l = strlen(s) - 3;

	if ((s[j] == s[0] && s[k] == s[1]) || *s == '\0')
	{
		return (1);
	}
	else if (j > 7)
	{
		if ((s[j] == s[0] && s[k] == s[1] && s[l] == s[2]) || s == '\0')
			return (1);
	}
	else
		return (0);
}
