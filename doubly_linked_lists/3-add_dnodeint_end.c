#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - ajte un nvx node a la fin d'une liste dlistint_t
 * @head: pointeur vers le pointeur du dÃbut de la liste
 * @n: valeur du nouveau noeud
 * Return: l'adresse du noeud elemt, ou NULL en cas d'echec
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node = *head;

	/* Allocation de memoire pr le nvx noeud */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* AssugnatÂ°de la valeur au nvx node */
	new_node->n = n;
	new_node->next = NULL; /* nvx node sera le dernier, donc prochain est NULL */

	/* si la liste est vide, le nvx node devient la tete */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	/* sinon, parcourt la liste jusqu'au dernier noeud */
	while (last_node->next != NULL)
		last_node = last_node->next;
	/* mjr les pointeur pr ajte le nvx node a la fin de la liste */
	last_node->next = new_node;
	new_node->prev = last_node;
	return (new_node);
}
