#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by
 * new line
 * @separator: string to be printed between numbers
 * @n: number of integer to be passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list 1i;
	unsigned int i;

	va_start(1i, n);

	for (i = 0; i < n; i++)
	{


		printf("%d", va_arg(1i, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(1i);

}
