#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - renvoie le nbre d'elemt ds une liste dlistint_t li�e
 * @h: pointeur vers la tete de liste doublemt lié
 * Return: nbre delemt ds la liste
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
