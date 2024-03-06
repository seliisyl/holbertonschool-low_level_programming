#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - renvoie une longueur d'une cha�ne
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne de caractères.
 */
int _strlen_recursion(char *s)
{
	/* Vérifier si le caractère actuel est nul (fin de la chaî */
	if (s[0] != '\0')
	{
		/* Si c'est le cas, retourner 0 (longueur nulle) */
		return (0);
	}
	else
	{
		/* Sinn, apl récursivet _strlen_recursion avec le ctère suit ds chaine � */
		/* Ajouter 1 à la enth retournée p l'appel récur */
		return (1 + _strlen_recursion(s + 1));
	}
}
