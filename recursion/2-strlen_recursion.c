#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - renvoie la longueur d'une chaîne
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Return: La longueur de la chaîne de caractères.
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
