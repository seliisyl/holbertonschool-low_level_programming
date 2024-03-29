#include "main.h"
#include <stdio.h>

/**
 * cap_string - Met en majuscule le 1er caractère de chq mot dans une chaîne.
 * @str: chaîne a traiter
 *
 * Return: Pointeur vers la chaîne traitée.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || str[i - 1] == ' ' ||
					str[i - 1] == '\t' || str[i - 1] == '\n' ||
					str[i - 1] == ',' || str[i - 1] == ';' ||
					str[i - 1] == '.' || str[i - 1] == '!' ||
					str[i - 1] == '?' || str[i - 1] == '"' ||
					str[i - 1] == '(' || str[i - 1] == ')' ||
					str[i - 1] == '{' || str[i - 1] == '}')
			{
				str[i] -= 32; /* Conversion en majuscule */
			}
		}
		i++;
	}

	return (str);
}
