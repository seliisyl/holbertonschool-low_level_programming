#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - cré array de caractèresinit avc caract�re donn�e
 * @size: taille du tableau a cr�er
 * @c: caract�re a utiliser pour init le tableau
 * Return: return un pointer vs le array ou Null si size 0 ou si malloc echec
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	/* Vérifier si la taille es 0 */
	if (size == 0)
		return (NULL);

	/* Allouer de la mémoire pour le tablea u*/
	/* +1 pour inclure le caractère de fin de chaî */
	array = malloc(sizeof(char) * (size + 1));
	if (array == NULL)
	return (NULL);

	/* Initialiser le tableau avec le caractère donn */
	for (i = 0; i < size; i++)
		array[i] = c;

	/* Ajouter le caractère de fin de chaî */
	array[size] = '\0';

	return (array);
}
