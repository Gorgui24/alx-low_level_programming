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
	void *ch;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ch = malloc(sizeof(char) * (size * nmb));

	if (ch == NULL)
		return (NULL);
	return (ch);
}
