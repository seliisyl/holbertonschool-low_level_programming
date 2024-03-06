#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Calcl lA racine car� �narl d'1 nmbr de manière récur
 * @n: Nombre dont on veut calculer la racine carr�.
 *
 * Return: La racine carrée naturelle de .
 * Si n n'a pas de racine carrée naturell retourne -.
 */
int _sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
	/* Cas de base */
	if (n < 0)
		return (-1); /* La racine carrée de nombre négatif n'existes */

	if (n == 0 || n == 1)
		return (n); /* La racine carrée de 0 ou 1 est le nombre lui-m�e */

	return (_sqrt_helper(n, 1)); /* Appel à une fonction auxiliaire récurse */
}

/**
 * _sqrt_helper - Fonct° auxiliaire récursiver cal la racine c
 * @n: Nombre dont on veut calculer la racine carré
 * @i: Nombre pour tester la racine carrée
 *
 * Return: La racine carrée naturelle de .
 * Si n n'a pas de racine carrée naturelle, retourne -.
 */
int _sqrt_helper(int n, int i)
{
	/* Si i * i est égal à n, alors i est la racine carrée */
	if (i * i == n)
		return (i);

	/* Si i dépasse la racine cae de n, n'a pas de racine ce entière. */
	if (i * i > n)
		return (-1);

	/* Sinon, recherche de la racine carrée récursivement en incrémentant*/
	return (_sqrt_helper(n, i + 1));
}
