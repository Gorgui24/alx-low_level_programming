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
	int j = strlen(str) + 1, i;
	char *ch;

	if (str == NULL)
		return (NULL);
	ch = malloc(sizeof(*str) * j);
	if (ch == NULL)
		return (NULL);
	j = j - 2;
	for (i = 0; i <= j; i++)
		ch[i] = str[i];
	return (ch);
}
