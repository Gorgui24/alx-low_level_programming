#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * malloc_checked - return adress
 * @b: int parameter
 * Return: pointer address
 */
void *malloc_checked(unsigned int b)
{
	void *ch;

	ch = malloc(b);

	if (ch == NULL)
		exit(98);
	return (ch);
}
