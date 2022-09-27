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
	unsigned int i;

	/*Delacring FOR*/
	for (a = 0; i < n; a++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
