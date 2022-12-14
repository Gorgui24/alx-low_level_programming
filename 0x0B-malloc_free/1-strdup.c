#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * _strdup - print by recursion
 * @str: pointer parameter
 * Return: parameter
 */
char *_strdup(char *str)
{
	int j = strlen(str), i;
	char *ch;

	if (str == NULL || !str)
	{
		return (NULL);
	}


	ch = malloc(sizeof(char) * (j + 1));
	if (ch == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ch[i] = str[i];
	ch[j] = '\0';
	return (ch);
}
