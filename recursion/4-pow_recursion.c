#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion -  Calcule x élev et la puissance y de manière récursive.
 * @x: Entier representant de base.
 * @y: Entier représentant l'exposat
 *
 * Retour: Le résultat de x élevé à la puissance y. Si y est ineur 0,
 *         retourne -1 pour indiquer une erreur.
 */
int _pow_recursion(int x, int y)
{
	/* Vérifie si l'exposant< 0 */
	if (y < 0)
	{
		/* Gère le cas où = 0 */
		if (x == 0)
			return (-1); /* Erreur: division par 0 */
		else
			return (-1); /* Erreur: résultat fractionnai */
					}

		/* Cas de base : y = 0 */
		if (y == 0)
			return (1);

		/* Récursion : multiplie x par lui-même, enecrementant y */
		return (x * _pow_recursion(x, y - 1));
}
