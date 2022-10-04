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
	if (str == NULL)
		return (NULL);
	else
		str = malloc(sizeof(*str) * 1024);
	return (str);
}
