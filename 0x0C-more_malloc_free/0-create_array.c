#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * create_array - print pointer
 * @size: int parameter
 * @c: char parameter
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(char) * size);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);

}
