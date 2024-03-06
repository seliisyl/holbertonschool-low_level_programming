#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return value de x augmentéla puisance de y
 * @x: Entier representant de base.
 * @y: Entier représentant l'exposat
 *
 * Return: Le résultat de x éle la puissance y <= 0
 *         retourne 1. Sinon, retourne x élev�a la puissance y.
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
