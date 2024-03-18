#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - fonction principale
 *@argc: nombre d'arguments passés au programme
 * @argv: tableau contenant les arguments passés au programme
 *
 *  Description : 7 fonct° représente le point d'entrée du prammme.
 * prend en cmpt les argmt passés en ligne de mmdee, effectue une opért�
 * mathématique sur les nombres fournis et affiche le résulta
 *
 * Return: Retourne 0 en cas de succès, et des codes d'erreur en cas d'échec.
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", operation(num1, num2));

	return (0);
}
