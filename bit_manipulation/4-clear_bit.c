#include <stdio.h>
#include "main.h"

/**
 * clear_bit - definit la valeur d'1 bit a 0 a un index donne
 * @n: pointeur vers le nbre dont on veut definir le bit
 * @index: l'index du bit a definir, a partie de 0
 *
 * Return: 1 si fonctionne, ou -1 si erreur
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	/* verifie si l'index est valide */
	if (index == sizeof(unsigned long int) * 8)
	{
		return (-1); /* renvoie -1 si l'index est invalide */
	}
	/* cr√e un masque avec le bit a 0 a l'index specifi√©*/
	mask = ~(1UL << index);

	/* applique le masue pr def le bit a 0 a l'index spe ds le nbr pointe par n */
	*n &= mask;
	/*renvoie 1pr indiquer que l'operat¬∞s'est deroul√e avec succ√s */
	return (1);
}
