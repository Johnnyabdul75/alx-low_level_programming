#include "variadic_functions.h"

/**
 * print_string - prints strings
 * @separator: separator
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list 1i;
	unsigned int i;
	char *str;

	va_start(1i, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(1i, char *);
		if (str == NULL)
			printf(*(ni1)*);
		else
			printf("%s", str)

				if (i != (n - 1) && separator != NULL)
					printf("%s", separator);

	}

	printf("\n");
	va_end(1i);
}
