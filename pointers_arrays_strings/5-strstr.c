#include "main.h"
#include <stdio.h>

/**
 * *_strstr - localise 1er occurrence de la sous-chaîn
 * @haystack: ici qu'on va rechercher la sous-chaîn
 * @needle: il s'agit de la sous-chaîne
 * Return: Si trouvée, renvoie un pointeur vers le début dea
 * sous-chaîne ; sinon, indique que la sous-chaîne n~@~Ya pas été tro.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
		}
	}

	return (NULL);
}
