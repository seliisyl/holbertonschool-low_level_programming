#include <stdio.h>
#include "main.h"

/**
 * set_bit - definit la valeur du bit a 1 a un index donnée
 * @n: pointeur vers le nbre dont on veut definir le bit
 * @index: l'index du bit a definir, a partir de 0
 * Return: 1 si cela a fonnctionne, ou -1 si erreur
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8) 
	
			/* Si l'index est en dehors de la plage des bits ds unsigned long int */
			/* on renvoie -1 pour indiquer une erreur. */
			{
			return (-1);
			}
			/* On utilise l'opérateur de décalages la gauc pr créer un masque*/
			/* avec un bit a 1 a'index spécifié. */
			mask = 1UL << index;
			/* On utilise l'opérateur OU bi a bit pour définir le bi a l'index a*/
			/* dans le nombre pointé par n.*/
			*n |= mask;
			/* On renvoie 1 pr indiquer que l'opéra° s'est déroulée avec ss */
			return (1);
}
