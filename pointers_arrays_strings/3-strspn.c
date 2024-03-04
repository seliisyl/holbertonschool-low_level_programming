#include "main.h"
#include <stdio.h>

/**
 * _strspn - calcule la longueur de la sous-chaîne initiale
 * @s: représente la chaîne à analyser.
 * @accept: représente la liste des caractères autorisés.
 * Return: retourne le nombre de bytes dans le segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i = 0;
	int j = 0;
	int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				a++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (a);
		}
	}
	return (a);
}
