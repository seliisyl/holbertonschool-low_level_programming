#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Crée une copie d'une chaîne de caractè.
 * @str: Chaîne de caractèr a copier.
 * Return:
 * Return unpointeur vs la nvlle chaîne de caractères si la copie réut
 * Retourne NULL si str est NULL ou si l'allocation de mémoire échou
 */
char *_strdup(char *str)
{
	int len = 0; /* Pour stocker la longueur de la chaî*/
		int i = 0; /* Variable de boucle */
	char *duplicate; /* Pointeur vers la chaîne duplique */

	/* Vérifier si la chaîne est N*/
	if (str == NULL)
	{
		return (NULL);
	}
	/* Calculer la longueur de la chaîe*/
	while (str[len] != '\0')
	{
		len++;
	}
	/* Allouer de la mémoire pour la nouvelle ca�ne */
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	/* Copier la chaîne originale dans la nouvelle mémoire al */
	for (i = 0; i < len; i++)

	{
		duplicate[i] = str[i];
	}
	/* Ajouter le caractère de fin de ca�ne */
	duplicate[len] = '\0';
	return (duplicate);
}
