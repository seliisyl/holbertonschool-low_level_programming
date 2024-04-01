#include <stdio.h>
#include "lists.h"

/**
 * print_list - print ts ls elemt d'une list lists_t
 * @h : pointeur vers la t�te de list
 * Return: le nombre de noeuds
 *
 */
size_t print_list(const list_t *h)
{
	/* init la variable a 0 pr cmpt le nbr de node ds liste */
	size_t node_count = 0;
	/* tant que h n'est pas NULL la boucle continue */
	/* donc il y'a encore des node a parcourir ds la liste*/
	while (h != NULL)
	{
		/* verifie si le *str du noeud actuel (h) est NULL*/
		/* si c'est le cas ,signifie que la cha�ne de caract�re est vide */
		if (h->str == NULL)
			/* si chaine de caract�re NULL alors print [0] (nil) */
			/* indique ps de cha�nede caract�re ds ce node */
			printf("[0] (nil)\n");
		else
			/* sichaine de caractère n'est as NULL alrs print la long de chain */
			/* print len de chaine (h->len) + la chaine elle-même (h->str) */
			printf("[%lu] %s\n", h->len, h->str);
		/* dple le (*h) vs le prochain node list + mjr valeur avc *next du node */
		h = h->next;
		/* incremente le compteur de node  pr cmpt le nbr ttlede node ds liste */
		node_count++;
	}
	return (node_count);
}
