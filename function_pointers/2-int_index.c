#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - cherche un elemt dans un tableau
 * @array: tableau d'entier
 * @size: nbre d'elemt ds le tableau
 * @cmp: pointeur vs la fonct°de cmp
 *
 * Description: Cette fonction recherche un élément dans un tableau
 * d'entiers en utilisant une fonction de comparaison spécifiée.
 * Elle renvoie l'index du premier élément pour lequel la fonction de
 * comparaison renvoie une valeur non nulle. Si aucun élément ne
 * correspond ou si la taille du tableau est inférieure ou égala 0,
 * la fonction renvoie -1.
 *
 * Return: L'index du premier élément pour lequel la fonction de
 * comparaison ne renvoie pas 0, sinon -1 si aucun élément ne correspond
 * ou si la taille du tableau est inferieure ou égalea 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* v�rifie si ls pointeurs array et cmp sont diff de NULL */
	if (array && cmp)

		/* it�re a travers les �l�mt du array */
		for (i = 0; i < (int)size; i++)
			if (cmp(array[i]))
				/* apl la fonct°cmp avcelemt act array[i] come argmt */
				return (i); /* si la condit°pr�ced est vraie */
	return (-1);
	/* si aucun elemt du array correspondt a ce qu'on recherche */
}
