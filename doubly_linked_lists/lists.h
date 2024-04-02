#ifndef __LISTS_H__
#define __LISTS_H__

#include <stddef.h>
#include <stdio.h>

/* def de la structure d'1 node de la liste doublemt chainÃ©*/
typedef struct dlistint_s
{
	int n; /* donnÃe stockÃe ds le node */
	struct dlistint_s *prev; /* pointeur vers le node precedent */
	struct dlistint_s *next; /* pointeur vers le node suivant */
}dlistint_t;

/* prototype des fonctions */

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
