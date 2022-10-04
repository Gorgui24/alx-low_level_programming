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
	int i, j = strlen(str);
	char *ch;

	if (str == NULL)
		return (NULL);
	else
	{
		str = malloc(sizeof(*str) * 1024);
		for (i = 0; i < j; i++)
		{
			ch[i] = str[i];		
		}
	}
	return (ch);
}
