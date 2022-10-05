#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * str_concat - print by recursion
 * @s1: pointer parameter
 * @s2: pointer parameter
 * Return: parameter
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i = strlen(s1) - 1, k = strlen(s2) - 1, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ch = malloc(sizeof(char) * (i + k));
	if (s1 != NULL || i > 0)
	{
		for (j = 0; j <= i; j++)
			ch[j] = s1[j];
	}
	if (s2 != NULL || k > 0)
	{
		if (s1 != NULL || i > 0)
		{
			i = i + 1;
			for (j = 0; j <= k; j++)
			{
				ch[j + i + 1] = s2[j];
			}
		}
		else
		{
			for (j = 0; j <= k; j++)
				ch[j] =  s2[j];
		}
	}	
	return (ch);
}
