#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - supp le node l'idx d'1 liste chaînée dlisti
 * @head: pointeur vers le pointeur vers la tête de la liste
 * @index: index du node a supp
 * Return: 1 en cas de réussite, -1 en cas d'échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *temp;
	unsigned int i;

	if (!current)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	for (i = 0; current && i < index - 1; i++)
		current = current->next;

	if (!current || !current->next)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	if (temp->next)
		temp->next->prev = current;
	free(temp);

	return (1);
}
