#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - libere la memoire allou� une liste chain�
 * @head: pointeur vers le 1er node de la liste
 */
void free_list(list_t *head)
{
	list_t *current_node; /* pointeur pour parcoiurir la liste */
	/* pointeur pr stoker le prochain node temp */
	list_t *next_node;

	current_node = head; /* init du pointeur de parcours */

	/* parcours de la liste */
	while (current_node != NULL)
	{
		next_node = current_node->next; /* sauve du 2nd node */
		free(current_node->str); /* liberat° memoire allouépr la chaine */
		free(current_node); /*liberat°memoire allouépr le node */
		current_node = next_node; /* dplmt vers le 2nd node */
	}
}
