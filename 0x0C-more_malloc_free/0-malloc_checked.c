#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * malloc_checked - return adress
 * @b: int parameter
 */
void *malloc_checked(unsigned int b)
{
	void *ch;

	ch = malloc(b);

	if (b == 0)
		exit (98);
	return (ch);
}
