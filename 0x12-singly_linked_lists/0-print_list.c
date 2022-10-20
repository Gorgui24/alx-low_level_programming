#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * size_t print_list - return adress
 * @h: pointer parameter
 * Return: node
 */
size_t size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node++;
		h->next;
	}
	return (node);
}
