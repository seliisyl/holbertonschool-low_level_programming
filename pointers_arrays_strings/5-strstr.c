#include "main.h"
#include <stdio.h>

/**
 * *_strstr - localise 1er occurrence de la sous-chaîne
 * @haystack: ici qu'on va rechercher la sous-chaîne
 * @needle: il s'agit de la sous-chaîne.
 * Return: Si trouvée, renvoie un pointeur vers le début de la
 * sous-chaîne ; sinon, indique que la sous-chaîne n’a pas été trouvée.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
			if (needle[j] == '\0')
				return (&haystack[i]);
	}
	return (NULL);
}
