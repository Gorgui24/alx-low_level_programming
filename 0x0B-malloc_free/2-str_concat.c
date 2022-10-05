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
	int i = strlen(s1), k = strlen(s2), j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ch = malloc(sizeof(ch) * (i + K)i);
	for (j = 0; j < i; j++)
	{
		ch[j] = s1[j];
	}
	ch[i] = ' ';
	for (j = 0; j < k; j++)
		ch[j + i + 1] = s2[j];
	return (ch);
}
