#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - ajte un nv node au d�but d'1 liste chain�e list_t
 * @head: pointeut vers un pointeur de la tete de liste
 * @str: chaine de caract�re a cp ds le nv node
 * Return: Adresse du nvlle elemt, ou NULL en cas d'echec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	for (i = 0; dup_str[i] != '\0'; i++)

		/* Allocation de mémoire pour le v node */
		new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Copie de la chaîne de caractère*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* Mise a jour des champs len et next du nv node */
	new_node->len = strlen(str);
	new_node->next = *head;
	/* Mise a jour de la tête de list */
	*head = new_node;
	return (new_node);
}
