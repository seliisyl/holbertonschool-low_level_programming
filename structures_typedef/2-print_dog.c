#include "dog.h"
#include <stdio.h>

/**
  * print_dog - print les détails d'un chine
  * @d: Pointeur vers la structure dog a imprimer
  *
  * Description:
  * ct fonct� print les détails d'undog, tels que le nom, l'âge et le propro.
  * Si un él�t de la structure dog est NULL, la fon°print "(nil)"place
  * Si le pointeur d est NULL, la fonction ne fait rien.
  */
void print_dog(struct dog *d)
{
	if (d == NULL) /* verifier si le pointeur d est NULL. */
		return; /* si oui, return sans rien faire */

	if (d->name == NULL) /* verifiez si le nom du chien est NULL */
		printf("(nil)"); /* si oui return (nil) */
	else
		printf("Name: %s\n", d->name);

	printf("age: %.1f\n", d->age);

	if (d->owner == NULL) /* verifie si le propri du chien est NULL */
		printf("owner: (nil\n");
	else
		printf("owner: %s\n", d->owner);
}
