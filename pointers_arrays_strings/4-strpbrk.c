#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - recherche ds strings un ds élémt d'un ensemble d'octets
 * @s: La chaîne à rechercher.
 * @accept: une sous-chaîne d'octets à rechercher.
 * Return: Renvoie un pointeur vers l’octet correspondant dans s ou NULL.”
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (NULL);
}
