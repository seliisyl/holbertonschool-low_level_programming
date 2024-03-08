#include "main.h"
#include <stdio.h>

/**
 * _strstr - Localise une sous-chaîn.
 * @haystack: La chaîne dans laquelle chercher
 * @needle: La sous-chaîn localiser.
 *
 * Return: Un pointeur vers le début de la sous-chaîne trouv,
 * ou NULL si la sous-chaîne n'est pas trouv�.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay_ptr;
	char *ndl_ptr;

	/* Parcourir la chaîne principale*/
	while (*haystack)
	{
		hay_ptr = haystack;
		ndl_ptr = needle;

		/* Comparer les caractères destring principale et de sous-chaine� */
		while (*ndl_ptr && *hay_ptr == *ndl_ptr)
		{
			hay_ptr++;
			ndl_ptr++;
		}

		/* Si la sous-chaîne est trouvé*/
		if (*ndl_ptr == '\0')
			return (haystack);

		/* Sinon, passer au caractère suivant dans la chaîne principal*/
		haystack++;
	}

	/* La sous-chaîne n'a pas été trouvée, retournerL */
	return (NULL);
}
