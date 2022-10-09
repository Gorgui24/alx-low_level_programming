#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * _realloc - return adress
 * @old_size: int parameter
 * @new_size: int parameter
 * @ptr: pointer parameter
 * Return: pointer address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ch;
	unsigned int i;

	if (old_size == 0 && new_size == 0)
		return (NULL);
	if (old_size < new_size)
	{
		ch = malloc(new_size);
		if (ch == NULL)
			return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (old_size < new_size && ptr != NULL)
	{
		for (i = 0; i < new_size; i++)
			ch[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (ch);

}
