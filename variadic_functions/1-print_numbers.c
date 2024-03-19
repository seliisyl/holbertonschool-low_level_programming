#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - imprimez tous les arguments.
 * @separator: impriméentre les chiffres
 * @n: nombres de num�ros imprim�s.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a_list;

	if (n > 0)
	{
		va_start(a_list, n);
		for (i = 0; i < n - 1; i++)
			if (separator)
				printf("%i%s", va_arg(a_list, int), separator);
			else
				printf("%i", va_arg(a_list, int));
		printf("%i\n", va_arg(a_list, int));
	}
	else
		printf("\n");
	va_end(a_list);
}
