#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion -  Calcule x élev et la puissance y de manière récursive.
 * @x: Entier representant de base.
 * @y: Entier représentant l'exposat
 *
 * Retour: Le résultat de x élevé à la puissance y. Si y est ineur 0,
 *         retourne -1 pour indiquer une erreur.
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	/* Si y<0, return -1 (indication d'erreur) */
	if (y == 0)
		return (1);
	/* Si y=0, retourne 1 */

	return (x * _pow_recursion(x, y - 1));
	/* Sinon, multiplie x par lui-même leve� la puissanc y-1 */
}
