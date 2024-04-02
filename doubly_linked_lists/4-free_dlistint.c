#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - lib√re une liste dlistint_t
 * @head: pointeur vers la tete de liste
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	/* parcourt la liste */
	while (head != NULL)
	{
		/* stoker le node suivant */
		current_node = head->next;
		/* lib√re le node actuel */
		free(head);
		/* passer au node suivant */
		head = current_node;
	}
}

