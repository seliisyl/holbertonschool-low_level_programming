#include <stdio.h>
#include "main.h"

/**
 * get_bit - renvoie du bit a un index donnÃ
 * @n: le nbre dont on bveut obtenir le bit
 * @index: l'index du bit a obtenir, a partir de 0
 *
 * Return: la valeur di bit a l'index ou -1 si une erreur s'est produite
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* si l'index est en dehors de la page des bit ds unsigned long sinon */
	 /* renvoie -1pr indiquer une erreur */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/* decale le bit a l'index de droite a l'extermite droite du nbre */
	n >>= index;
	/* l'operateur & pr masquer les bits sauf le bit a l'index */
	/* si bit bit a l'index est 1 RESULTAT 1 SINON 0 */
	return (n & 1);
}
