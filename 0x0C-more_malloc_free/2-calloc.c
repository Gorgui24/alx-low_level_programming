#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * calloc - return adress
 * @nmemb: int parameter
 * @size: int parameter
 * Return: pointer address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ch = malloc(size * nmemb);

	if (ch == NULL)
		return (NULL);
	for (i = 0; i <  nmemb * size; i++)
		ch[i] = 0;
	return (ch);
}
