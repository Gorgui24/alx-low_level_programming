#include "lists.h"
#include <stdlib.h>
/**
 * free_list - print
 * @head: pointer parameter
 * Return: node
 */
void free_list(list_t *head)
{
	list_t freeL;

	while (head)
	{
		freeL = head->next;
		free(head->str);
		free(head);
		head = freeL;
	}
}
