#include <stdio.h>
#include "lists.h"

/**
 * list_len - renvoir le nbre delemt ds une liste chain�enlist_t
 * @h: poiteur vers la t�te de la liste
 * Return: le nbre delemt ds la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
