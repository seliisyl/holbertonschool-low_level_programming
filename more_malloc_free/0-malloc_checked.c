#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - alloue mÃmoire a l'aide de malloc
 * @b: size used to init
 * Return: pointeur
 */
void *malloc_checked(unsigned int b)
{
	void *ptr; /* declaratÂ°de la variable ptr */
	/* allocatÂ°de mÃmoire */
	ptr = malloc(b);
	/* verificatÂ°si l'alloctÂ° areussi */
	if (ptr == NULL)
		/* Quitter le program avec le code 98 si echec */
		exit(98);
	/* retourner le pointeur vers la mÃ©moire allouÃe */
	return (ptr);
}
