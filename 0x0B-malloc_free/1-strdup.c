#include "main.h"
#include<string.h>
/**
 * _strdup - print by recursion
 * @str: pointer parameter
 * Return: parameter
 */
char *_strdup(char *str)
{
	str = malloc(sizeof(*str) * 1024);
	return (str);
}
