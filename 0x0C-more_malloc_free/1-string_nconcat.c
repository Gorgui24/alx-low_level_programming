#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * string_nconcat - return adress
 * @s1: char pointer parameter
 * @s2: char pointer parameter
 * @n: int parameter
 * Return: pointer address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int i, j, k, m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ch = malloc(sizeof(char) * (strlen(s1) + n) + 1);
	if (ch == NULL)
		return (NULL);
	k = strlen(s1) - 1;
	m = strlen(s2) -1;
	for (i = 0; i < k; i++)
		ch[i] = s1[i];
	if (n > m)
	{
		for (j = 0; j <= m; j++)
			ch[k + j] = s2[j];
	}
	else
	{
		for (j = 0; j <= n; j++)
			ch[j + n] = s2[j];
	}
	return (ch);

}
