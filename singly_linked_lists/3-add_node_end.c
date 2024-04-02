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
	/* init des variable */
	list_t *current;
	list_t *new_node;
	int c;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (c = 0; str[c] != '\0'; c++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
