#include "main.h"
#include <stdio.h>

/**
 * *_strchr - localisé un caractère in a string
 * @s: la chaîne dans laquelle la recherche sera effectuée.
 * @c: C'est le caractère à rechercher dans la chaîne s.
 * Return: renvoie un pointeur vers a 1er occurence du caractere c dans s
 * renvoie NULL si le caractère n'est pas trouvé.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
