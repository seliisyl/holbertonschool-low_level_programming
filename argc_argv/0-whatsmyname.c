#include "main.h"
#include <stdio.h>

/**
 * main - fonction principale
 * @argc: le nmbr d'argument de la de comde.
 * @argv: un tableau de string content ls argumt de ligne de comde
 *
 * Return: Toujour 0.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	char *nom_programme = argv[0];

	/* argc : Le nombre d'arguments de la ligne de commande.*/
	/* argv : Un tableau de chaînes contet ls argut de la ligne de comd. */

	/* Imprimer le nom du programme */
	printf("%s\n", nom_programme);
	return (0);
}
