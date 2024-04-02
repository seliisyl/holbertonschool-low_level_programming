#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - retour sum de tte ls donné (0) d'1 liste chain� dlistint
 * @head: pointeur vers la tete de liste
 * Return: som de toutes les donnés, ou NULL si la liste est vid
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* parcourt la liste et ajt la valeur des données de chq ode som */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
