#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - print
 * @head: double pointer parameter
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *avant, *apres;

	if (avant == NULL || apres == NULL)
		return (NULL);

	apres  = NULL;
	while ((*head)->next != NULL)
	{
	avant = (*head)->next;
	(*head)->next = apres;
	apres = *head;
	*head = avant;
	}
	(*head)->next = apres;
	return (*head);
}
