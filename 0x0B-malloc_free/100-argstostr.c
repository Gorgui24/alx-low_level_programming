#include "main.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
/**
 * argstostr - print by recursion
 * @ac: pointer parameter
 * @av: pointer parameter
 * Return: parameter
 */
char *argstostr(int ac, char **av);
{
	int i, j, k, s;
	char *ch;

	s = 0, k = 0;
	if (ac == NULL || av == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			s++;
			j++;
		}
		s++;
		j++;
	}
	ch = malloc((sizeof(char) * s) + 1);
	if (ch == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ch[k] = av[i][j];
			j++;
			k++;
		}
		ch[k] = '\n';
		k++;
		i++;
	}
	ch[k] = '\0';
	return (ch);
}

