#include "main.h"
#include <stdio.h>

/**
 * leet - Convertit une chaîne en 'leet' (1337).
 * @str: la chaîne à convertir
 *
 * Return: la chaîne convertie en 'leet'
 */
char *leet(char *str)
{
	char *leet_chars = "aeotlAEOTL";
	char *leet_equivs = "43071";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_equivs[j];
				break;
			}
		}
	}

	return (str);
}
