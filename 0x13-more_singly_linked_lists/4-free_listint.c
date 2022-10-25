#include "lists.h"
#include <stdio.h>
/**
 * free_listint - print
 * @head: double pointer parameter
 * Return: node
 */
void free_listint(listint_t *head)
{
	listint_t *fre;

	while (head)
	{
		fre = head->next;
		free(head);
		head = fre;
	}
}
