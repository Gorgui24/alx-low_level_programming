#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - print
 * @head: double pointer parameter
 * @n: int parameter
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ajout;

	ajout = malloc(sizeof(listint_t));
	if (ajout == NULL)
		return (NULL);
	ajout->n = n;
	ajout->next = *head;
	*head = ajout;
	return (ajout);
}
