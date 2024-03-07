#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Fonction principale
 * @argc: Le nombre total d'arguments passés au programme.
 * @argv: Un tableau de chaînes de caractères contenant les arguments.
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	/* Vérifie si le progra reçoit exactement deux arguments*/
	if (argc != 3)
	{
		printf("Erreur\n");
		/* Affiche "Erreur" suivi d'un saut de ligne */
		return (1); /* Retourne 1 pour indiquer une erreur */
	}

	/* Convertit les arguments en entiers */
	num1 = atoi(argv[1]);
	/* Convertit le premier argument en entier */
	num2 = atoi(argv[2]);
	/* Convertit le deuxième argument en entier*/

	/* Multiplie les nombres */
	result = num1 * num2;

	/* Affiche le résulta */
	printf("%d\n", result);

	return (0);
	/* Retourne 0 pr indiquer que le program c exécuté corm */
}
