#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - renvoie le nieme noeud d'une liste chainédlistintt
 * @head: pointeur vers la tete de la liste
 * @index: index du noeud, commen�ant a 0
 * Return: pointeur vers le ni�me noeud, ou NULL si le noeud n'existe pas
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	/* parcourt la liste jusqu'a atteindre l'index souhqaité*/
	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	/*verifier si l'index souhait� est atteint */
	if (count == index)
		return (head);
	else
		return (NULL); /* node n'existe pas */
}

