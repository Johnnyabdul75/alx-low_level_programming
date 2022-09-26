#include "main.h"

/**
 * _memset - Fill memory with a constabt byte
 * @s: memiry area to fill
 * @b: constant byte to fill
 * @n: bytes of memory area to fill
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
