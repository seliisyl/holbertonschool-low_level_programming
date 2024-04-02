#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insere un nv node a une posit°donnéds un
 * liste chainé dlistint_t
 * @h: pointeur vers un pointeur vers la tete de la liste
 * @idx: index ou le nv node doit etres ajte
 * @n: valeur a stoker ds le nv node
 * Return: adresse di nv node, ou NULL si le node n'a ps pu etre ajte
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *prev_node;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	prev_node = *h; /* L'élément précédent est la tête de la li */
	while (idx > 1 && prev_node != NULL)
	{
		prev_node = prev_node->next;
		idx--;
	}

	if (prev_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev_node;
	new_node->next = prev_node->next;

	if (prev_node->next != NULL)
		prev_node->next->prev = new_node;
	prev_node->next = new_node;

	return (new_node);
}
