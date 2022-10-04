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
	int j = strlen(str) + 1;
	if (str == NULL)
		return (NULL);
	else
	{
		str = malloc(sizeof(*str) * j);i
		for (i = 0; i < j - 2; j++)
			str[i] = str[i];
	}
	return (str);
}
