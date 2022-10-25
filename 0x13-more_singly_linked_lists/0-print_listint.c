#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print
 * @h: pointer parameter
 * Return: node
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n); 
		h = h->next;
	}
	return (node);
}
