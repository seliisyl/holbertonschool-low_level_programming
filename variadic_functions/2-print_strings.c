#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - imprimer les argmts de chaines
 * @separator: imprime les chaines
 * @n: nombres de numeros imprimes
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list a_list;

	va_start(a_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(a_list, char *);
		if (str)
		{
			if (separator)
			{
				(i < n - 1) ? printf("%s%s", str, separator) : printf("%s", str);
			}
			else
			{
				printf("%s", str);
			}
		}
		else
		{
			if (separator)
			{
				(i < n - 1) ? printf("(nil)%s", separator) : printf("(nil)");
			}
			else
			{
				printf("(nil)");
			}
		}
	}
	printf("\n");
	va_end(a_list);
}
