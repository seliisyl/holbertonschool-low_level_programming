#ifndef __LISTS_H__
#define __LISTS_H_

#include <stddef.h> /* pour size_t */
#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - noeud de liste chainée
 * @str: string - (chaine malloc)
 * @len: longueur de la chaine
 * @next: pointe vers le noeud suivant
 *
 * Description: structure de noeud de liste chainée
 */
/* Def de la struct list.h */
typedef struct list_s
{
	char *str; /* * vers une chaine de character */
	size_t len;
	struct list_s *next; /* (* vs prochain elemt de la liste */
}
list_t;

/* prototypes de fonctions */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LIST_h */
