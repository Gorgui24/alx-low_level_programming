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
	int i = strlen(s1), k = strlen(s2), size, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = i + k - 2;
	ch = malloc((sizeof(char) * size) + 1);
	if (ch == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ch[j] = s1[j];
	for (j = 0; j <= size + 1; j++)
	       ch[j + i] = s2[j]; 	
	return (ch);
}
