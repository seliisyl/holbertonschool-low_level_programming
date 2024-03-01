#include "main.h"
#include <stdio.h>

/**
 * _strcmp - fonction qui compare 2 chaînes
 * @s1: 1er chaîne
 * @s2: 2eme chaîne
 * Return: renvoie 0 if s1 == s2, renvoie < if s1 < s2, renvoie > if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (diff);
}
