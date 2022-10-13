#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_then_all - sums all its parameters
 * @n: first parameter
 *
 * Return: 0 if n is null
 * or sum of parameters in other case
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list 1i;
	int sum = 0;
	unsigned int i;

	va_start(1i, n);

	if (n != 0)
	{
		for (i = 0; 1 < n; i++)
			sum += va_arg(1i, int);
	}

	va_end(1i);
	return (sum);

}
