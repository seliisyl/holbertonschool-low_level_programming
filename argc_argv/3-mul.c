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
{/* Vérifie si le progra reçoit exactement deux argumen */
	if (argc != 3)
	{
		printf("%s\n", "Error");
		/* Affiche "Erreur" suivi d'un saut de ligne */
		return (1); /* Retourne 1 pour indiquer une erreur */
	}

	/* Convertit les arguments en entiers */
	/* Convertit le premier argument en entier */

	/* Convertit le deuxième argument en entie */

	/* Multiplie les nombres */

	/* Affiche le résulta*/

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
	/* Retourne 0 pr indiquer que le program c exécuté cecte */
}
