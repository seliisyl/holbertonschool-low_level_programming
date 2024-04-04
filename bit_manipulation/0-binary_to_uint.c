#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convertit un nbre binaire en un int non signe
 * @b: pointe vers chaine de 0 a 1 caractere
 * Return: nbre convertit, ou 0 si ya des caracteres ds str b ps 0 ou 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	/* parcourt la chaine jusqu'a caractere actuel */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* verifie si le caractÃre est 0 ou 1 */
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) + (b[i] - '0');
		}
		else
		{
			/* caractere invalide trouve, returne 0 */
			return (0);
		}
	}
	return (result);
}
