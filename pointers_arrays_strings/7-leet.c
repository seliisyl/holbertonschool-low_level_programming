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
	int i1 = 0, i2;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i1])
	{
		for (i2 = 0; i2 < 8; i2++)
		{
			if (str[i1] == leet[i2] || (str[i1] + 32) == leet[i2])
			{
				str[i1] = leet[i2];
				break;
			}
		}
		i1++;
	}

	return (str);
}

