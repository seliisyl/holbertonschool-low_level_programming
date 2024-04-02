#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - ajte un nv node a la fin d'1 liste list_t
 * @head: Un pointeur vers le pointeur de tête de liste
 * @str: La chaîne de caractèr,cp dans  nvnode
 *
 * Return: Le pointeur vers le nvx node ajte, ou NULL en cas d'échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/* init un pointeur au dernier node */
	list_t *last_node = *head;

	/* alloue de la memoire pr le nv node */
	list_t *new_node = malloc(sizeof(list_t));
	/* verifie si l'allocat°a echoué*/
	if (new_node == NULL)
		return (NULL);

	/* cp la chaine de caract�re ds le nv node */
	new_node->str = strdup(str);

	/* verifire si la cp a echoué*/
	if (new_node->str == NULL)
	{
		/* lib�re la m�moireallou�e pr le nv node */
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str); /* Calcul de la longueur de la chaîne */
	/* init le champ next du nv node a NULL */
	new_node->next = NULL;

	/* verifie si la liste est vide */
	if (*head == NULL)
	{
		/* si oui, le nv node devient la t�te de liste */
		*head = new_node;
	}
	else 
	{
		/* parcourt la liste jusqu'au dernier node */
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}

		/* Liaison du dernier noeud au nouveau noeud */
		last_node->next = new_node;
	}
	return (new_node);
}
