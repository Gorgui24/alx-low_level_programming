#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - print
 * @head: double pointer parameter
 * @n: int parameter
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ajout, *dern;

	ajout = malloc(sizeof(listint_t));
	if (ajout == NULL)
		return (NULL);
	ajout->n = n;
	ajout->next = NULL;
	if (*head == NULL)
		*head = ajout;
	else
	{
		dern = *head;
		while (dern->next != NULL)
		       dern = dern->next;
	dern->next = ajout;
	}	
	return (ajout);
}
