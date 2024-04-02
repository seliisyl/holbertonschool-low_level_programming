#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print tt les elemt d'une liste double lie
 * @h: pointeur vers la tete de la liste double lie
 * Return: nbre de nodes ds la liste doublement lie
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	/* parcoure la liste doublemt liÃe */
	while (h != NULL)
	{
		printf("%d\n", h->n); /* print les donnÃe du node actuel */
		h = h->next; /* passer au node suivant */
		node_count++; /* incrementer le nbre de noeud */
	}
	return (node_count);
}
