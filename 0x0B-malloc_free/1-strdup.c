#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * _strdup - print by recursion
 * @str: pointer parameter
 * Return: parameter
 */
char *_strdup(char *str)
{
	int j = strlen(str), i;
	char *ch;

	ch = malloc(sizeof(*str) * j);
	if (ch == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ch[i] = str[i];
	ch[j] = '0\';
	return (ch);
}
