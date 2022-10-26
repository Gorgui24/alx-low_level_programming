#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - print
 * @head: double pointer parameter
 * Return: node
 */
void free_listint2(listint_t **head)
{
	listint_t *fre;

	if (head == NULL)
		return;

	while (*head)
	{
		fre = (*head)->next;
		free(*head);
		*head = fre;
	}
}
