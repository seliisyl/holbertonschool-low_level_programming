#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - ajt un nv node au dÃbut d'1 liste dlistint_t
 * @head: pointeur vers le pointeur de dÃbut de la liste
 * @n: valeur du nouveau node.
 * Return: l'adresse du nv node, ou NULL en cas d'echec
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocatÂ°de memoire pr le nvx node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* AssignatÂ°valeur au nvx node */
	new_node->n = n;
	/* mjr des pointeurs */
	/* le nvx node devient la tete, donc son prev est NULL */
	new_node->prev = NULL;
	/* le nvx node pointe vers l'ancienne tete de la liste */
	new_node->next = *head;

	/* si la liste n'est pas vide, mjr le *prev de l'ancienne tete */
	if (*head != NULL)
		(*head)->prev = new_node;
	/* mjr la tete de liste */
	*head = new_node;
	return (new_node);
}
