#include "main.h"
#include <stdio.h>

/**
 * main - Fonction principale
 * @argc: Le nombre total d'arguments passés au programm.
 * @argv: Un tableau de chaînes de caractères contenant les argumen.
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])
{
	int i;
	/* Parcourir tous les arguments et les imprimer */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
