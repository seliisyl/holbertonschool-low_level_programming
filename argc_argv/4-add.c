#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Fonction principale
 * @argc: Le nombre total d'arguments passés au programme.
 * @argv: Un tableau de chaînes de caractères contenant les argt.
 *
 * Return: Toujours 0.
 */
int main(int argc, char *argv[])
{
	int i, j, som = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		som += atoi(argv[i]);
	}
	printf("%i\n", som);
	return (0);
}
